#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * check_io_status - checks if a file can be opened or closed
 * @stat: file descriptor of the file to be opened
 * @fd: file descriptor
 * @filename: name of the file
 * @mode: closing or opening
 *
 * Return: void
 */
void check_io_status(int stat, int fd, char *filename, char mode)
{
	if (mode == 'C' && stat == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
	else if (mode == 'O' && stat == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
		exit(98);
	}
	else if (mode == 'W' && stat == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
		exit(99);
	}
}

/**
 * main - copies the content of one file to another
 * @argc: argument count
 * @argv: arguments passed
 *
 * Return: 1 on success, exit otherwise
 */
int main(int argc, char *argv[])
{
	int src, dest, bytes_rd = 1024, bytes_wr, close_src, close_dest;
	unsigned int mode = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s", "Usage: cp file_from file_to\n");
		exit(97);
	}
	src = open(argv[1], O_RDONLY);
	check_io_status(src, -1, argv[1], 'O');
	dest = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, mode);
	check_io_status(dest, -1, argv[2], 'W');
	while (bytes_rd == 1024)
	{
		bytes_rd = read(src, buffer, sizeof(buffer));
		if (bytes_rd == -1)
			check_io_status(-1, -1, argv[1], 'O');
		bytes_wr = write(dest, buffer, bytes_rd);
		if (bytes_wr == -1)
			check_io_status(-1, -1, argv[2], 'W');
	}
	close_src = close(src);
	check_io_status(close_src, src, NULL, 'C');
	close_dest = close(dest);
	check_io_status(close_dest, dest, NULL, 'C');

	return (0);
}

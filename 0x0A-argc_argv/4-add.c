#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
* main - adds positive numbers
* @argc: number of arguments passed
* @argv: array of pointers to strings
* Return: 0 on success, 1 if error
*/

int main(int argc, char *argv[])
{
	int i, p, sum = 0;

	for (i = 1; i < argc; i++)
	{
		for (p = 0; argv[i][p] != '\0'; p++)
		{
			if (!isdigit(argv[i][p]))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}

#include <stdio.h>
#include "main.h"
/**
* main - print name of the program
* @argc: counts number of arguement
* @argv: pointer to array of strings
* Return: 0 on success
*/

int main(int argc, char *argv[])
{
	if (argc > 0)
	{
		printf("%s\n", argv[0]);
	}
	return (0);
}

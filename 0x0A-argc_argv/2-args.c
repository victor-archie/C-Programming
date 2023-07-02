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
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}

#include <stdio.h>
#include "main.h"
/**
* main - print name of the program
* @argc: counts number of arguement
* @argv: pointer to array of strings
* Return: 0 on success
*/

int main(int argc, char *argv[] __attribute__((unused)))
{
	if (argc > 0)
	{
		printf("%d\n", argc - 1);
	}
	return (0);
}

#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* main - multiplies two numbers
* @argc: counts number of arguement
* @argv: pointer to array of strings
* Return: 0 on success
*/

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}

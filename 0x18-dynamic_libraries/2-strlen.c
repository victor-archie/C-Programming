#include "main.h"
#include <stdio.h>

/**
 * _strlen - return length of a string
 * @s: string
 *
 * Return: Always 0.
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0') 
	{
		length++;

		s++;
	}

	return length;
}

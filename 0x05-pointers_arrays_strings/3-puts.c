#include "main.h"

/**
 * _puts - prints string
 * @str: string character
 *
 * Return: Always 0.
 */

void _puts(char *str)
{
	while (*str)
	{
		putchar(*str++);
	}
	putchar('\n');
}

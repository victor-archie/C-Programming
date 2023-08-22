#include "main.h"

/**
 * _puts - prints string
 * @s: string character
 *
 * Return: Always 0.
 */

void _puts(char *s)
{
	while (*s)
	{
		putchar(*s++);
	}
	putchar('\n');
}

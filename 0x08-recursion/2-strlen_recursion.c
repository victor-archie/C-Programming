#include "main.h"
/**
 *  _strlen_recursion - print string length
 *  @s: string
 *  Return: 0
 */

int _strlen_recursion(char *s)
{
	int count = 0;

	if (*s != '\0')
	{
		count++;
		return (count + int _strlen_recursion(s + 1));
	}
	return (0);
}

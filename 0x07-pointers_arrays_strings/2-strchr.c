#include "main.h"
/**
 * _strchr - locates a character
 * @s: string
 * @c: character
 * Return: pointer to first character in the string
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (c == '\0')
	{
		return (s);
	}
	return (NULL);
}

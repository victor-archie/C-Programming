#include "main.h"
/**
 * _strspn - gets the length of a prefix substring
 * @s: a pointer to the null-terminated string to search
 * @accept: pointer to null-terminated string containing characters to match
 * Return: Always 0.
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;

	while (*s != '\0')
	{
		int found = 0;

		for (int i = 0; accept[i] != '\0'; i++)
		{
			if (*s == accept[i])
			{
				found = 1;
				break;
			}
		}
		if (!found)
		{
			break;
		}
		count++;
		s++;
	}
	return (count);
}

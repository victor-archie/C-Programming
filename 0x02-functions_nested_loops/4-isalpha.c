#include "main.h"

/**
 * _isalpha - Entry point
 * @c: input char
 * Description: check for alphabets
 * Return: 1 if alphabets 0 otherwise
 */

int _isalpha(int c)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (c == i)
			return (1);
	}

	for (i = 'A'; i <= 'Z'; i++)
	{
		if (c == i)
			return (1);
	}

	return (0);
}

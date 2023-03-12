#include "main.h"
/**
 * factorial - factorial of a number
 * @n: integer number
 * Return: 0
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 1 || n == 0)
	{
		return (1);
	}
	else if (n > 1)
	{
		return (n * factorial(n - 1));
	}
}

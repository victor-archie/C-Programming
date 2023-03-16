#include "main.h"
/**
 * _sqrt - checks for the square root
 * @m:int
 * @n:int
 *
 * Return: int
 */

int _sqrt(int m, int n)
{
	if (n == 1)
		return (1);
	else if (m * m > n)
		return (-1);
	else if (m * m == n)
		return (m);
	else
		return (_sqrt(m + 1, n));
}


/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: integer to find sqrt of
 * Return: natural square root or -1
 */

int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (_sqrt(1, n));

}

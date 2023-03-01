#include "main.h"
#include <stdio.h>

/**
 * swap_int - swaps value of int a and b
 * @a: first int
 * @b: second int
 *
 * Return: Always 0
 */

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

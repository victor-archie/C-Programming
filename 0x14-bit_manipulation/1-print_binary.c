#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: num of prented
 * Return: void
 */


void print_binary(unsigned long int n)
{
	unsigned long int i;
	unsigned int flag = 1UL << (sizeof(int) * 8 - 1);
	int flag_print = 0;

	for (i = 0; i < (sizeof(unsigned long int) * 8); i++)
	{
		if (n & flag)
		{
			_putchar('1');
		}
		else if (flag_print)
		{
			_putchar('0');
		}

		n = n << 1;
	}

	if (!flag_print)
	{
		_putchar('0');
	}
}

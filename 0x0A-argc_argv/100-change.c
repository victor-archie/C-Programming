#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints min number of coins to make change for an amount of money
 * @argc: number of command line arguments
 * @argv: array of pointer to strings
 * Return: 0 - success.
 */

int main(int argc, char *argv[])
{
	int i;
	int cents, coins, nCoins;

	if (args != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);
	coins = {25, 10, 5, 2, 1};
	nCoins = 0;

	for (i = 0; i < sizeof(coins) / sizeof(coins[0]); i++)
	{
		nCoins += cents / coins[i];
		cents %= coins[i];
	}

	printf("%d\n", nCoins);
	return (0);
}

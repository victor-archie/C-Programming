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
	int cent;
	int coins = 0;

	if (argc == 1 || argc > 2)
	{
		printf("Error\n");
		return (1);
	}

	cent = atoi(argv[1]);

	while (cent > 0)
	{
		if (cent >= 25)
			cent -= 25;
		else if (cent >= 10)
			cent -= 10;
		else if (cent >= 5)
			cent -= 5;
		else if (cent >= 2)
			cent -= 2;
		else if (cent >= 1)
			cent -= 1;
		Coins += 1;
	}

	printf("%d\n", Coins);
	return (0);
}

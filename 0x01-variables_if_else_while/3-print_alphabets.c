#include <stdio.h>
/**
 * main - prints alphabets in lowercase and then in uppercase
 * Return: 0
 */

int main(void)

{
	char l;

	for (l = 'a'; l <= 'z'; l++)
		putchar(l);

	for (l = 'A'; l <= 'Z'; l++)
		putchar(l);

	putchar('\n');

	return (0);
}

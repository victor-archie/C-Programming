#include <stdio.h>
/**
 * main - tp print out sizes of data types in c
 * Return: 0
 */
int main(void)
{
	char c;
	int i;
	long int l;
	long long int t;
	float f;

	printf("Size of a char is: %lu byte(s)\n", (unsigned long)sizeof(c));
	printf("Size of an int is: %lu byte(s)\n", (unsigned long)sizeof(i));
	printf("Size of a long int is: %lu byte(s)\n", (unsigned long)sizeof(l));
	printf("Size of a long long int is: %lu byte(s)\n", (unsigned long)sizeof(t));
	printf("Size of a float is: %lu byte(s)\n", (unsigned long)sizeof(f));
	return (0);
}

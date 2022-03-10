#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	char c;

	long long int id;

	long int ic;

	float f;

	printf("Size of a char: %lu bytes(s)\n", (unsigned long)sizeof(c));
	printf("Size of an int: %lu bytes(s)\n", (unsigned long)sizeof(i));
	printf("Size of a long int: %lu bytes(s)\n", (unsigned long)sizeof(ic));
	printf("Size of a long long int: %lu bytes(s)\n", (unsigned long)sizeof(id));
	printf("Size of a float: %lu bytes(s)\n", (unsigned long)sizeof(f));

	return (0);
}

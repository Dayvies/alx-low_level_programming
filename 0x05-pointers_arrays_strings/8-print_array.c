#include "main.h"

/**
 * print_array - check length of string
 * @a : array
 * @n : length
 * Return: 0
 * On error, 0 is returned, and errno is set appropriately.
 */
void print_array(int *a, int n)
{
	int i = 0;

	printf("%d", a[0]);
	for (i = 1; i < n; i++)
	{
		printf(", %d", a[i]);
	}
	printf("\n");
}

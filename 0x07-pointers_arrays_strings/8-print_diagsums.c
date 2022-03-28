#include "main.h"

/**
 * print_diagsums - gets diagonal sums
 * @a : source
 * @size : square root of source
 * Return: void
 * On error, 0 is returned, and errno is set appropriately.
 */
void print_diagsums(int *a, int size)
{
	unsigned int sum = 0;
	unsigned int sum2 = 0;
	int i, j, size1;

	size1 = (size * size) - 1;
	for (i = 0; i <= size1 && size > 0; )
	{
		sum = sum + a[i];
		i = i + size + 1;
	}
	for (j = size -1; j < size1 && size > 0; )
	{
		sum2 = sum2 + a[j];
		j = j + size - 1;
	}
	printf("%u, %u\n", sum, sum2);
}


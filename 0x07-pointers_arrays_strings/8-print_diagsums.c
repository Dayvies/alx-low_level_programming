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
	unsigned int count =0;
	int i,j;

	for (i = 0; i < (size * size); )
	{
		sum = sum + a[i];
		i = i + size + 1;
	}
	for (j = size -1; j < (size * size); )
	{
		sum2 = sum2 + a[j];
		count = count + 1;
		if ((int)count == size)
			break;
		j = j + size - 1;
	}
	printf("%u, %u\n", sum, sum2);
}


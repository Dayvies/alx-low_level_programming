#include "search_algos.h"
void print_arr(int *array, size_t l, size_t r);
/**
 * binary_search - binary search algorithm
 * @array: the array
 * @size: size
 * @value: value
 * Return: int
 */
int binary_search(int *array, size_t size, int value)
{
	size_t l, r, m;

	l = 0;
	r = size - 1;
	if (!array || size == 0)
		return (-1);

	while (l <= r)
	{
		print_arr(array, l, r);

		m = (l + r) / 2;
		if (array[m] < value)
			l = m + 1;
		else if (array[m] > value)
			r = m - 1;
		else
			return (m);
	}
	return (-1);
}
/**
 * print_arr - print array
 *
 * @array : the array
 * @l : low value
 * @r : big Value
 * Return: void
 */
void print_arr(int *array, size_t l, size_t r)
{
	size_t i;

	printf("Searching in array:");
	for (i = l; i <= r; i++)
	{
		printf(" %d", array[i]);
		if (i != r)
			printf(",");
	}
	printf("\n");
}

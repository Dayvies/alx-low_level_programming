#include "search_algos.h"
int binary_search2(int *array, size_t l, size_t r, int value);
void print_arr(int *array, size_t l, size_t r);
/**
 * exponential_search - exponential search
 * @array : array
 * @size : size
 * @value : value
 * Return: int
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t bound = 1,sizet;

	while (bound < size && array[bound] < value)
	{
		printf("Value checked array[%ld] = [%d]\n", bound, array[bound]);
		    bound *= 2;
	}
	if (bound >= size)
		sizet = size - 1;
	else
		sizet = bound;
	return binary_search2(array, bound / 2, sizet, value);
}
/**
 * binary_seach - binary search algorithm
 * @array: the array
 * @size: size
 * @value: value
 * Return: int
 */
int binary_search2(int *array, size_t l, size_t r, int value)
{
	size_t m;

	printf("Value found between indexes [%ld] and [%ld]\n", l, r);

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
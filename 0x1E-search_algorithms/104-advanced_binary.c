#include "search_algos.h"
int binary_search3(int *array, size_t l, size_t r, int value);
void print_arr(int *array, size_t l, size_t r);
/**
 * advanced_binary - advanced binary search
 * @array : the array
 * @size : size
 * @value: value
 * Return: int
 */
int advanced_binary(int *array, size_t size, int value)
{
	size_t l, r;

	l = 0;
	r = size - 1;
	
	return (binary_search3(array, l, r, value));
}
/**
 * binary_search3 - binary search algorithm
 * @array: the array
 * @r: r
 * @l: l
 * @value: value
 * Return: int
 */
int binary_search3(int *array, size_t l, size_t r, int value)
{
	size_t m;

	if (r <= l)
	{
		if (array[l] != value)
			return (-1);
		return (l);
	}
	print_arr(array, l, r);

	m = ((l + r) / 2);
	if (array[m] < value)
	{
		l = m + 1;
		return (binary_search3(array, l, r, value));
	}
	else
	{
		r = m;
		return (binary_search3(array, l, r, value));
	}
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

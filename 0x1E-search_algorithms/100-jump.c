#include "search_algos.h"
/**
 * jump_search - searching using jump search algorithm
 * @array: the array
 * @size: size
 * @value: search Value
 * Return: int
 */
int jump_search(int *array, size_t size, int value)
{
	size_t a = 0, b, c;

	if (!array || size == 0)
		return (-1);
	b = 0 + sqrt(size);
	c = sqrt(size);
	printf("Value checked array[%ld] = [%d]\n", a, array[a]);
	while (array[b] < value)
	{
		a = b;
		b = b + c;

		if (a > size - 1)
		{
			a = a - c;
			b = b - c;

			break;
		}
		printf("Value checked array[%ld] = [%d]\n", a, array[a]);
	}
	printf("Value found between indexes [%ld] and [%ld]\n", a, b);
	while (a != b + 1)
	{
		if (a == size)
			break;
		printf("Value checked array[%ld] = [%d]\n", a, array[a]);
		if (array[a] == value)
			return (a);
		a = a + 1;
	}

	return (-1);
}

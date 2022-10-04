#include "search_algos.h"
/**
 * interpolation_search - interpolation_search
 * @array: the array
 * @size: size
 * @value: value
 * Return: int
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t h, l, pos;

	if (!array || size == 0)
		return (-1);
	l = 0;
	h = size - 1;
	pos = l + (((double)(h - l) / (array[h] - array[l]))
		   * (value - array[l]));
	while ((array[h] != array[l]) && (value >= array[l])
					     && (value <= array[h]))
	{

		pos = l + (((double)(h - l) / (array[h] - array[l]))
			   * (value - array[l]));
		printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);
		if (array[pos] < value)
			l = pos + 1;
		else if (value < array[pos])
			h = pos - 1;
		else
			return (pos);
	}
	if (value == array[l])
		return (l);

	printf("Value checked array[%ld] is out of range\n", pos);
	return (-1);
}

#include "search_algos.h"
/**
 * interpolation_search - interpolation_search
 * @array: the array
 * @size: size
 * @value: value
 * Returns: int
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t high, low, pos;

	low = 0;
	high = size - 1;
	pos = low + (((double)(high - low) / (array[high] - array[low])) * (value - array[low]));
	while ((array[high] != array[low]) && (value >= array[low]) && (value <= array[high]))
	{
		
		
		pos = low + (((double)(high - low) / (array[high] - array[low])) * (value - array[low]));
		printf("Value checked array[%ld] = [%d]\n",pos,array[pos]);
		if (array[pos] < value)
			low = pos + 1;
		else if (value < array[pos])
			high = pos - 1;
		else
			return pos;
	}
	if (value == array[low])
		return low;
	else
	{
		printf("Value checked array[%ld] is out of range\n",pos);
		return -1;
	}
}
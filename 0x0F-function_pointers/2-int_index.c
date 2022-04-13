#include "function_pointers.h"

/**
 * int_index -  returns the index of the first element that meets condition
 * @array: the array of int 
 * @size: size of array
 * @cmp - function pointer
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0, c = 0;

	if (!array || !cmp)
		return (-1);
	if (size <= 0)
		return (-1);
	for (i = 0; i < size ; i++)
	{
		c = cmp(array[i]);
		if (c != 0)
			return (i);
	}
	return (0);
}

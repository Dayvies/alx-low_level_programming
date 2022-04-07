#include "main.h"

/**
 * array_range - array of integers from min to max
 * @min : minimum number
 * @max : maximum number
 * Return: pointer to int array
 */
int *array_range(int min, int max)
{
	int i = 0, j;
	int *p;

	j = max - min + 1;
	if (min > max)
		return (NULL);
	p = malloc(sizeof(int) * j);
	if (p == NULL)
		return (NULL);
	for (i = min; i < max + 1; i++)
		p[i] = i;
	return (p);
}

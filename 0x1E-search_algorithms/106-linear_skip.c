#include "search_algos.h"
/**
 * linear_skip - jump skip with predetermined gaps
 * @list : list
 * @value : value
 * @list : list
 * Return: node or null
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *current, *previous;
	size_t a, b;

	if (list == NULL)
		return (NULL);
	current = list;
	previous = current;

	while (current->n < value)
	{
		if (!current->express)
		{
			b = current->index - previous->index + current->index - 1;
			a = current->index;
			break;
		}
		previous = current;
		current = current->express;

		printf("Value checked at index [%ld] = [%d]\n", current->index, current->n);
		a = previous->index;
		b = current->index;
	}

	printf("Value found between indexes [%ld] and [%ld]\n", a, b);

	while (a != b + 1)
	{
		printf("Value checked at index [%ld] = [%d]\n", a, previous->n);
		if (previous->n == value)
			return (previous);
		previous = previous->next;
		a = a + 1;
	}
	return (NULL);
}

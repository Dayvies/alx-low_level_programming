#include "search_algos.h"
listint_t *getNode(listint_t *current, size_t index);
/**
 * jump_list - jump search on list
 * @list : list
 * @size: size
 * @value : value
 * @list : list
 * Return: node or null
 */

listint_t *jump_list(listint_t *list, size_t size, int value)
{
	listint_t *current, *previous;
	size_t a = 0, b, c;

	if (list == NULL || size == 0)
		return (NULL);
	b = 0 + sqrt(size);
	c = sqrt(size);
	current = list;
	previous = current;
	current = getNode(current, b);
	printf("Value checked array[%ld] = [%d]\n", b, current->n);

	while (current->n < value)
	{
		a = b;
		b = b + c;
		previous = current;
		if (b > size - 1)
		{
			b = size - 1;
			current = getNode(current, b);
			printf("Value checked at index [%ld] = [%d]\n", b,
			       current->n);
			break;
		}
		current = getNode(current, b);
		printf("Value checked at index %ld] = [%d]\n", b, current->n);
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

/**
 * getNode- Get the Node object
 * @current : current]
 * @index : index
 * Return: listint_t*
 */
listint_t *getNode(listint_t *current, size_t index)
{
	while (current)
	{
		if (current->index == index)
			return (current);
		current = current->next;
	}
	return (NULL);
}

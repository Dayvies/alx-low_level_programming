#include "lists.h"

/**
 * dlistint_len - print list contents return number of nodes
 * @h: head
 * Return: the number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *current;
	int count = 0;

	current = h;
	while (current != NULL)
	{
		current = current->next;
		count++;
	}
	return (count);
}

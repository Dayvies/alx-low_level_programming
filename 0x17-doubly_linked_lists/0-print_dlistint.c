#include "lists.h"

/**
 * print_dlistint - print list contents return number of nodes
 * @h: head
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *current;
	int count = 0;

	current = h;
	while (current != NULL)
	{
		printf("%d\n", current->n);
		current = current->next;
		count++;
	}
	return (count);
}

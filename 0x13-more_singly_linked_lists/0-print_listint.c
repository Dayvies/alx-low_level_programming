#include "lists.h"
/**
 * print_listint- prints elements of the lists
 * @h: head
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	unsigned long int count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count = count + 1;
	}
	return (count);
}

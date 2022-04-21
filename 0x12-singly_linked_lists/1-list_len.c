#include "lists.h"
/**
 * list_len- prints all elements of a lists
 * @h : pointer to head
 * Return: number of nodes
 */
size_t list_len(const list_t *h)
{
	unsigned long int count = 0;

	while (h != NULL)
	{
		count = count + 1;
		h = h->next;
	}
	return (count);
}

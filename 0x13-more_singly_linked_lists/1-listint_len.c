#include "lists.h"

/**
 * listint_len - gets number of elements in a list
 * @h : head
 * Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
	unsigned long int count = 0;

	while (h != NULL)
	{
		count += 1;
		h = h->next;
	}
	return (count);
}

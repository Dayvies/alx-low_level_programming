#include "lists.h"

/**
 * insert_dnodeint_at_index - insert node at int_index
 * @h: head
 * @idx: index
 * @n: number
 * Return: the address of the new node, or NULL if it failed *
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *current = *h, *next;
	unsigned int count = 0;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (current == NULL && idx == 0)
	{
		*h = new;
		return (new);
	}
	if (idx == 0)
	{
		new->next = current;
		current->prev = new;
		*h = new;
		return (new);
	}
	while (current != NULL)
	{
		if (count == idx - 1)
		{
			next = current->next;
			new->prev = current;
			new->next = next;
			current->next = new;
			if (next)
				next->prev = new;
			return (new);
		}
		count++;
		current = current->next;
	}
	return (NULL);
}

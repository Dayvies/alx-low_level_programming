#include "lists.h"

/**
 * add_dnodeint_end - adds node at the end
 * @head: head
 * @n: const int
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *current;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	current = *head;
	new->n = n;
	if (current == NULL)
	{
		*head = new;
		return (new);
	}
	while (current->next)
		current = current->next;
	current->next = new;
	new->prev = current;
	new->next = NULL;
	return (new);
}

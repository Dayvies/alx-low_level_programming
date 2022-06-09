#include "lists.h"

/**
 * add_dnodeint - add node at start
 * @head: head node
 * @n: constant int
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new, *current;

	current = *head;
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (current == NULL)
	{
		*head = new;
		return (new);
	}
	new->next = current;
	new->prev = NULL;
	current->prev = new;
	*head = new;
	return (*head);
}

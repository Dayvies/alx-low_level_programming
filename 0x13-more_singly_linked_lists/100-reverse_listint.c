#include "lists.h"

/**
 * reverse_listint - reverse nodes code
 * @head : head
 * Return: the head node
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *current = *head;
	listint_t *prev = NULL;

	while (current != NULL)
	{
		*head = current->next;
		current->next = prev;
		prev = current;
		current = *head;
	}
	*head = prev;
	return (prev);
}

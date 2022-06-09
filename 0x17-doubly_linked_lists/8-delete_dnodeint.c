#include "lists.h"

/**
 * delete_dnodeint_at_index - delete nodes
 * @head : head
 * @index: index
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int count = 0;
	dlistint_t *current, *next, *temp;

	if (*head == NULL)
		return (-1);
	current = *head;
	if (index == 0)
	{
		temp = *head;
		if (temp->next)
			temp->next->prev = NULL;
		*head = temp->next;
		free(temp);
		return (1);
	}
	while (current != NULL)
	{
		if (count == index)
		{
			temp = current->prev;
			next = current->next;
			temp->next = next;
			if (next)
				next->prev = temp;
			free(current);
			return (1);
		}
		count++;
		current = current->next;
	}
	return (-1);
}

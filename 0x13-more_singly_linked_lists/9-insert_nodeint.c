#include "lists.h"

/**
 * insert_nodeint_at_index - inserts node at int_index
 * @head: head
 * @idx : index
 * @n : n
 * Return: address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int prev = 0;
	listint_t *new, *prevNode;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (*head == NULL && idx == 0)
	{
		*head = new;
		return (new);
	}
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	prevNode = *head;
	while (prevNode != NULL)
	{
		if (prev == idx - 1)
		{
			new->next = prevNode->next;
			prevNode->next = new;
			return (new);
		}
		prevNode = prevNode->next;
		prev += 1;
	}
	free(new);
	return (NULL);
}

#include "lists.h"

/**
 * free_listint2 - frees list sets head to null
 * @head : head
 * Return : Void
 */
void free_listint2(listint_t **head)
{
	listint_t *temp, *node;

	node = *head;
	while (node != NULL)
	{
		temp = node;
		node = node->next;
		free(temp);
	}
	*head = NULL;
}

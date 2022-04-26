#include "lists.h"

/**
 * pop_listint - remove head
 * @head : head
 * Return:  head node’s data (n)
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int data;

	temp = *head;
	if (temp == NULL)
		return (0);
	data = temp->n;
	*head = temp->next;
	free(temp);
	return (data);
}

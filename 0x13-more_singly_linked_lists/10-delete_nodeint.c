#include "lists.h"

/**
 * delete_nodeint_at_index - delete at index
 * @head : head
 * @index : index
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *node;
	unsigned int count = 0;

	temp = *head;
	if (temp == NULL)
		return (-1);
	if (index == 0)
	{
		*head = temp->next;
		free(temp);
		return (1);
	}
	while (temp != NULL)
	{
		if (count == index - 1)
		{
			node = temp->next;
			temp->next = node->next;
			free(node);
			return (1);
		}
		count += 1;
		temp = temp->next;
	}
	return (-1);
}

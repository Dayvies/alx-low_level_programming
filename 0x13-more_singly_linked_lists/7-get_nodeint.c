#include "lists.h"

/**
 * get_nodeint_at_index - get node at int_index
 * @head : head
 * @index : index
 * Return: node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;

	while (head != NULL)
	{
		if (count == index)
			return (head);
		count += 1;
	}
	return (NULL);
}

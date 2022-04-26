#include "lists.h"

/**
 * free_listint_safe - free even with loops
 * @h : head
 * Return: size freed
 */
size_t free_listint_safe(listint_t **h)
{
	long int num = 0, diff;
	listint_t *temp = *h, *last;

	while (temp != NULL)
	{
		diff = temp - temp->next;
		num++;
		if (diff > 0)
		{
			last = temp;
			temp = temp->next;
			free(last);
		}
		else
		{
			free(temp);
			break;
		}
	}
	*h = NULL;
	return (num);
}

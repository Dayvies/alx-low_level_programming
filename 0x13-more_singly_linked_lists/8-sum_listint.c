#include "lists.h"

/**
 * sum_listint - sums n in each node
 * @head : head
 * Return: Sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum = sum + head->n;
		head = head->next;
	}
	return (sum);
}

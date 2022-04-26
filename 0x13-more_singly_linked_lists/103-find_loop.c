#include "lists.h"

/**
 * find_listint_loop - find loop
 * @head : head
 * Return: where loop starts
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slowp = head, *fastp = head;

	while (slowp && fastp && fastp->next)
	{
		slowp = slowp->next;
		fastp = fastp->next->next;
		if (slowp == fastp)
			return (slowp);
	}
	return (NULL);
}

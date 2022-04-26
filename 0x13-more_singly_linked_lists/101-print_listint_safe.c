#include "lists.h"

/**
 * print_listint_safe - print even if theres loop
 * @head : head
 * Return: num
 */
size_t print_listint_safe(const listint_t *head)
{
	long int diff = 0, num = 0;

	while (head)
	{
		num++;
		diff = head - head->next;
		printf("[%p] %d\n", (void *)head, head->n);
		if (diff > 0)
			head = head->next;
		else
		{
			printf("-> [%p] %d\n", (void *)head->next, head->next->n);
			break;
		}
	}
	return (num);
}

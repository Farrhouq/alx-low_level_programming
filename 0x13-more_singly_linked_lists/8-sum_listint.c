#include "lists.h"

/**
 * sum_listint - finds the sum of the list
 * @head: the list
 * Return: the sum of the list
 */
int sum_listint(listint_t *head)
{
	const listint_t *i = head;
	size_t total = 0;

	while (i != NULL)
	{
		total += i->n;
		i = i->next;
	}
	return (total);
}

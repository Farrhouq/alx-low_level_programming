#include "lists.h"

/**
 * listint_len - finds the length of the list
 * @h: the list
 * Return: the length of the list
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *i = h;
	size_t count = 0;

	while (i != NULL)
	{
		count++;
		i = i->next;
	}
	return (count);
}

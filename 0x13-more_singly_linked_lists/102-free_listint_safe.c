#include "lists.h"

/**
 * free_listint_safe - frees a linked list
 * @h: pointer to linked list
 *
 * Return: number of freed nodes
 */

size_t free_listint_safe(listint_t **h)
{
	listint_t *p1;
	int nodes = 0;

	if (h == NULL || *h == NULL)
		return (nodes);

	p1 = *h;
	while (p1 != NULL)
	{
		nodes++;
		if (*h >= (*h)->next)
		{
			p1 = (*h)->next;
			free(*h);
			*h = p1;
		}
		else
		{
			free(*h);
			*h = NULL;
			break;
		}
	}

	*h = NULL;

	return (nodes);
}

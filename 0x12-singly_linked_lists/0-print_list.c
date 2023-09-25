#include "lists.h"

/**
 * print_list - prints all members of the linked list
 * @h: linked list
 *
 * Return: number of nodes in the linked list
 */

size_t print_list(const list_t *h)
{
	int nodes = 0;
	const list_t *p;

	if (h == NULL)
		return (nodes);

	p = h;

	while (p != NULL)
	{
		nodes++;
		if (p->str)
		{
			printf("[%u] %s\n", p->len, p->str);
		}
		else
		{
			printf("[0] (nil)\n");
		}
		p = p->next;
	}

	return (nodes);
}

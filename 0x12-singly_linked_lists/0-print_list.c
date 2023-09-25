#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_list - prints all the elements of a list
 * @h: the list
 * Return: the number of elements
 */
size_t print_list(const list_t *h)
{
	const list_t *i = h;
	int count = 0;

	if (h == NULL)
	{
		printf("[0] (nil)\n");
		return (0);
	}

	while (i != NULL)
	{
		if (i->str == NULL)
			printf("[0] (nil)");
		else
			printf("[%d] %s\n", i->len, i->str);
		count++;
		i = i->next;
	}

	return (count);
}

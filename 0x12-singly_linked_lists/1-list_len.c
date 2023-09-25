#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * list_len - prints the number ofelements of a list
 * @h: the list
 * Return: the number of elements
 */
size_t list_len(const list_t *h)
{
	list_t i = *h;
	int count = 0;

	while (1)
	{
		count++;
		if (i.next == NULL)
		{
			return (count);
		}
		i = *(i.next);
	}

	return (count);
}
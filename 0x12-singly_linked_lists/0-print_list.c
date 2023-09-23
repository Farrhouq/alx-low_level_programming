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
	list_t i = *h;
	int count = 0;

	if (h == NULL)
	{
		printf("[0] (nil)\n");
		return (0);
	}

	while (1)
	{
		if (i.str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", i.len, i.str);
		count++;
		if (i.next == NULL)
		{
			return (count);
		}
		i = *(i.next);
	}

	return (count);
}

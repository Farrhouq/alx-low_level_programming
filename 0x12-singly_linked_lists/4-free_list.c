#include "lists.h"
#include <string.h>
#include <stdio.h>

/**
 * free_list - frees a list_t list
 * @head: the list
*/
void free_list(list_t *head)
{
	list_t *i, *next;

	i = head;
	while (i != NULL)
	{
		next = i->next;
		free(i->str);
		free(i);
		i = next;
	}
}

#include "lists.h"

/**
 * free_listint - frees a linked list
 * @head: the list
*/
void free_listint(listint_t *head)
{
    listint_t *i, *next;

	i = head;
	while (i != NULL)
	{
		next = i->next;
		free(i);
		i = next;
	}
}
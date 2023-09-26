#include "lists.h"

/**
 * free_listint2 - frees a list and sets the
 * head to NULL
 * @head: the head of the list
*/
void free_listint2(listint_t **head)
{
	listint_t *i, *next;

	i = *head;
	while (i != NULL)
	{
		next = i->next;
		free(i);
		i = next;
	}
	free(i);
	*head = NULL;
}

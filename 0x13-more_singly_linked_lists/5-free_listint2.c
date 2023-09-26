#include "lists.h"

/**
 * free_listint2 - frees a linked list
 * @head: linked list
 *
 */

void free_listint2(listint_t **head)
{
	listint_t *p;

	if (head == NULL)
		return;

	while (*head != NULL)
	{
		p = *head;
		*head = (*head)->next;
		free(p);
	}

	*head = NULL;
}

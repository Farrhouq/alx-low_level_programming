#include "lists.h"

/**
 * free_listint2 - frees a list and sets the
 * head to NULL
 * @head: the head of the list
*/
void free_listint2(listint_t **head)
{
	listint_t *next;

	if (head == NULL)
		return;

	while (*head != NULL)
	{
		next = *head;
		*head = (*head)->next;
		free(next);
	}
	*head = NULL;
}

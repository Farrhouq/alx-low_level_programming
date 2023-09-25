#include "lists.h"

/**
 * free_list - frees a linked list
 * @head: linked list
 *
 */

void free_list(list_t *head)
{
	list_t *curr;

	while (head != NULL)
	{
		curr = head;
		head = head->next;
		free(curr->str);
		free(curr);
	}
}
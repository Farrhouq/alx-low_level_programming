#include "lists.h"

/**
 * delete_nodeint_at_index -  deletes the node at index index of a listint_t
 * linked list
 * @head: pointer to the head
 * @index: the index of deletion
 * Return: 1 on success, -1 on failure
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *i = *head, *next;
	unsigned int j = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		i = *head;
		*head = (*head)->next;
		free(i);
		return (1);
	}

	for (j = 0; j < index - 1; j++)
	{
		if (i == NULL)
			return (-1);

		i = i->next;
	}

	next = i->next;
	i->next = i->next->next;
	free(next);
	return (1);

}

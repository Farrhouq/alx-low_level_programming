#include "lists.h"

/**
 * reverse_listint - reverses a linked list
 * @head: linked list
 *
 * Return: pointer to first node of reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *p1, *p2;

	p1 = NULL;
	p2 = NULL;

	if (*head == NULL)
		return (NULL);

	while (*head != NULL)
	{
		p1 = (*head)->next;
		(*head)->next = p2;
		p2 = *head;
		*head = p1;
	}
	*head = p2;

	return (*head);
}

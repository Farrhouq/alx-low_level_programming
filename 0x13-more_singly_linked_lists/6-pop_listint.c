#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list, and returns
 * the head node’s data (n).
 * @head: the head of the list
 * Return: the value of the deleted node
 */
int pop_listint(listint_t **head)
{
	listint_t *i = *head;
	int n;

	if (*head == NULL)
		return (0);

	*head = i->next;
	n = i->n;
	free(i);
	return (n);
}

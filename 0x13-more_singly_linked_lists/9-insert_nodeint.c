#include "lists.h"

/**
 * insert_nodeint_at_index - as the name implies
 * @head: the head of the list
 * @idx: the index
 * @n: the value of new node
 * Return: the address of the new node, or NULL if it failed
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *cur = *head, *new, *next;
	unsigned int index = 0;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	if (idx == 0)
	{
		new->n = n;
		new->next = *head;
		*head = new;
		return (new);
	}

	for (index = 0; index < idx - 1; index++)
	{
		if (cur == NULL)
			return (NULL);

		cur = cur->next;
	}
	new->n = n;
	next = cur->next;

	cur->next = new;
	new->next = next;

	return (new);
}

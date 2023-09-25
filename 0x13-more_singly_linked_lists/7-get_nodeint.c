#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list.
 * @head: the list
 * @index: the searching index
 * Return: the node at index @index
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *cur = head;
	unsigned int i = 0;

	for (i = 0; i < index; i++)
	{
		if (cur == NULL)
			return (NULL);
		cur = cur->next;
	}
	return (cur);
}

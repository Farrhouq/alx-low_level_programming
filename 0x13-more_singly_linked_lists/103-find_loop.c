#include "lists.h"

/**
 * find_listint_loop - finds a loop in a linked list
 * @head: linked list
 *
 * Return: address to the start of the loop
 */

listint_t *find_listint_loop(listint_t *head)
{
	const listint_t *slow, *fast;

	if (head == NULL)
		return (NULL);

	fast = head;
	while (fast)
	{
		slow = fast;
		fast = fast->next;

		if (fast >= slow)
		{
			return ((void *)fast);
		}
	}

	return (NULL);
}

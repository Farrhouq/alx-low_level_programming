#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * add_node_end - adds a node to the end of
 * a singly linked list
 * @head: the head of the list
 * @str: the str for the new node
 * Return: the address to the new node, or
 * NULL on fail.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *i = *head, *new;
	int len = 0;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	while (str[len])
		len++;

	new->str = strdup(str);
	new->len = len;
	new->next = NULL;

	if (i == NULL)
	{
		i = *head = new;
		return (i);
	}
	while (i->next != NULL)
		i = i->next;
	i->next = new;

	return (i);
}

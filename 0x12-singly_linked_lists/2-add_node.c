#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * add_node - adds a node to the start of
 * a linked list
 * @head: a pointer to the start of list
 * @str: the str of the new node
 * Return: the address of the new element
 * or NULL on failure
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	int i = 0;

	while (str[i])
		i++;
	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	new->len = i;
	new->next = *head;
	*head = new;

	return (new);
}

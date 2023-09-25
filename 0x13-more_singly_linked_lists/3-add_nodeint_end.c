#include "lists.h"

/**
 * add_nodeint - adds a new node at the
 * end of a listint_t list.
 * @head: pointer to the head
 * @n: new node value
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
    listint_t *new;
    listint_t *i = *head;

    new = malloc(sizeof(listint_t));
    if (new == NULL)
        return (NULL);

    new->n = n;
    new->next = NULL;
    if (*head == NULL)
    {
        *head = new;
        return (new);
    }

    while (i->next != NULL)
    {
        i = i->next;
    }
    i->next = new;
    return (new);
}
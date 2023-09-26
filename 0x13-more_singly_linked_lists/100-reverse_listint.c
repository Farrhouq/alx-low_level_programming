#include "lists.h"

/**
 * reverse_listint - reverses a listint_t linked list
 * @head: pointer to the head of list
 */
listint_t *reverse_listint(listint_t **head)
{
    listint_t *cur = (*head)->next, *prev = *head, *next;

    if (*head == NULL || (*head)->next == NULL)
    {
        return *head;
    }

    while (cur != NULL)
    {
        next = cur->next;
        cur->next = prev;
        prev = cur;
        cur = next;
    }

    *head = prev;
    return (*head);
}

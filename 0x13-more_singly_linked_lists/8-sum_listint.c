#include "lists.h"

/**
 * listint_len - finds the length of the list
 * @h: the list
 * Return: the length of the list
 */
int sum_listint(listint_t *head)
{
    const listint_t *i = head;
    size_t total = 0;

    while (i != NULL)
    {
        total += i->n;
        i = i->next;
    }
    return (total);
}

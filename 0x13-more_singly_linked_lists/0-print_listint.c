#include "lists.h"

/**
 * print_listint - prints all the elements
 * of a listint_t list
 * @h: the list
 * Return: the number of nodes
*/
size_t print_listint(const listint_t *h)
{
    const listint_t *i = h;
    size_t count = 0;

    while (i != NULL)
    {
        printf("%d\n", i->n);
        count++;
        i = i->next;
    }
    return (count);
}

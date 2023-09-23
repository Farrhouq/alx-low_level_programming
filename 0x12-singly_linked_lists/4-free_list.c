#include "lists.h"
#include <string.h>
#include <stdio.h>

/**
 * free_list - frees a list_t list
 * @head: the list
*/
void free_list(list_t *head)
{
    list_t *i, *next;

    i = head;

    while (i->next != NULL)
    {
        next = i->next;
        free(i);
        i = next;
    }
    free(i);
}
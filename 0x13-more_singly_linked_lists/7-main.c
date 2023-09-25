#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    listint_t *head;
    listint_t *node;

    head = NULL;
    add_nodeint_end(&head, 0);
    add_nodeint_end(&head, 1);
    add_nodeint_end(&head, 2);
    add_nodeint_end(&head, 1024);
    print_listint(head);
    printf("\nindex: ");
    node = get_nodeint_at_index(head, 4);
    printf("%d\n", node->n);
    print_listint(head);
    free_listint2(&head);
    return (0);
}
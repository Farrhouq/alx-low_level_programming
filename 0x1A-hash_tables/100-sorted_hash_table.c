#include "hash_tables.h"

shash_table_t *shash_table_create(unsigned long int size)
{
    shash_table_t *new_table;
    shash_node_t **array;

    new_table = malloc(sizeof(shash_table_t));

    if (new_table == NULL)
    {
        return (NULL);
    }

    array = malloc(sizeof(shash_node_t) * size);

    if (array == NULL)
    {
        free(new_table);
        return (NULL);
    }

    new_table->array = array;
    new_table->size = size;
    new_table->shead = NULL;
    new_table->stail = NULL;

    return (new_table);
}

int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
    shash_node_t *node;
    unsigned long int index;
    shash_node_t *head, *tr, *temp;
    char *val = strdup(value);

    (void)tr;

    if (ht == NULL)
        return (0);

    node = malloc(sizeof(shash_node_t));
    if (node == NULL)
        return (0);

    node->key = (char *)key;
    node->next = NULL;
    node->value = val;
    node->snext = NULL;
    node->sprev = NULL;

    index = key_index((const unsigned char *)key, ht->size);

    if (ht->array[index] == NULL)
    {
        ht->array[index] = node;

        head = ht->shead;
        if (head == NULL)
        {
            ht->shead = node;
            ht->stail = node;
            return (1);
        }

        tr = head;

        if (strcmp(node->key, tr->key) < 0)
        {
            temp = ht->shead;
            temp->sprev = node;
            ht->shead = node;
            node->snext = temp;
            return (1);
        }

        while (tr != NULL)
        {
            if (strcmp(node->key, tr->key) >= 0)
            {
                temp = tr->snext;
                tr->snext = node;
                node->snext = temp;
                node->sprev = tr;
                if (node->snext == NULL)
                    ht->stail = node;
                return (1);
            }
            tr = tr->next;
        }
    }
    else
    {
        shash_node_t *old_node_head = ht->array[index];
        shash_node_t *tr;

        tr = old_node_head;
        while (tr != NULL)
        {
            if (strcmp(tr->key, key) == 0)
            {
                tr->value = val;
                free(node);
                return (1);
            }
            tr = tr->next;
        }

        old_node_head->next = node;
    }
    return (1);
}

void shash_table_print(const shash_table_t *ht)
{
    shash_node_t *head, *tr;
    int printed = 0;

    head = ht->shead;

    tr = head;
    printf("{");
    while (tr != NULL)
    {
        if (printed)
            printf(", ");

        printf("%s: %s", tr->key, tr->value);
        printed = 1;
        tr = tr->snext;
    }
    printf("}\n");
}
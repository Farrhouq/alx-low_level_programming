#include "hash_tables.h"

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
    unsigned long index;
    hash_node_t *node, *old_node;
    char *val = strdup(value);

    node = malloc(sizeof(hash_node_t));
    if (node == NULL)
        return (0);

    index = key_index((unsigned char*)key, ht->size);
    node->key = (char *)key;
    node->next = NULL;
    strcpy(val, value);
    node->value = val;

    if (ht->array[index] != NULL)
    {
        old_node = ht->array[index];
        ht->array[index] = node;
        node->next = old_node;
    }
    else
    {
        ht->array[index] = node;
    }

    return (1);
}
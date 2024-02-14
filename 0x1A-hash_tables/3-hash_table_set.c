#include "hash_tables.h"

/**
 * hash_table_set - adds a key-value pair to a hash table
 * @ht: the hash table
 * @key: the new key
 * @value: the value of the new key
 *
 * Return: 1 on success, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long index;
	hash_node_t *node, *old_node, *s_node;
	char *val = strdup(value);

	if (ht == NULL)
		return (0);

	if (!strlen(key))
		return (0);

	if (value == NULL)
		return (0);

	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
		return (0);

	index = key_index((unsigned char *)key, ht->size);
	node->key = (char *)key;
	node->next = NULL;
	node->value = val;

	if (ht->array[index] != NULL)
	{	old_node = ht->array[index];
		s_node = old_node;

		while (s_node != NULL)
		{
			if (strcmp(s_node->key, key) == 0)
			{s_node->value = val;
				free(node);
				return (1);
			}
			s_node = s_node->next;
		}
		ht->array[index] = node;
		node->next = old_node;
	}
	else
	{	ht->array[index] = node;
	}

	return (1);
}

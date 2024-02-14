#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value from a hash table
 * @ht: the hash table
 * @key: the key
 *
 * Return: the value at the key
*/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long index;
	hash_node_t *head;

	if (ht == NULL)
		return (NULL);

	index = key_index((unsigned char *)key, ht->size);
	head = ht->array[index];
	while (head != NULL)
	{
		if (strcmp(head->key, key) == 0)
			return (head->value);

		head = head->next;
	}
	return (NULL);
}

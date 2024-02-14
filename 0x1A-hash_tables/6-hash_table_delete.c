#include "hash_tables.h"

/**
 * hash_table_delete - frees a hash table
 * @ht: the hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *node;

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			node = ht->array[i];
			while (node != NULL)
			{
				hash_node_t *temp = node;

				node = node->next;
				free(temp->value);
				free(temp);
			}
		}
	}
	free(ht->array);
	free(ht);
}

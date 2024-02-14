#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: the size of the hash table
 *
 * Return: a pointer to the created hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_table;
	hash_node_t **array;

	new_table = malloc(sizeof(hash_table_t));

	if (new_table == NULL)
	{
		return (NULL);
	}

	array = malloc(sizeof(hash_node_t) * size);

	if (array == NULL)
	{
		return (NULL);
	}

	new_table->array = array;
	new_table->size = size;

	return (new_table);
}

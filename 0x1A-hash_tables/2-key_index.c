#include "hash_tables.h"

/**
 * key_index - a function that gives you the index of a key in a hash table
 * @key: the key
 * @size: the size of the hash_table
 *
 * Return: the hash value of the key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}

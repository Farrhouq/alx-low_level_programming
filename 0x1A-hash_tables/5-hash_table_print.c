#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: the hash map
*/
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0;
	int printed = 0;
	hash_node_t *head;

	if (ht == NULL)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			if (printed)
				printf(", ");

			printf("\"%s\": \"%s\"", ht->array[i]->key, ht->array[i]->value);
			printed = 1;
			if (ht->array[i]->next != NULL)
			{
				head = ht->array[i]->next;
				while (head != NULL)
				{
					if (printed)
						printf(", ");
					printf("\"%s\": \"%s\"", head->key, head->value);
					head = head->next;
				}
			}
		}
	}
	printf("}\n");
}

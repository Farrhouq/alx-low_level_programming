#include "main.h"
#include <stdlib.h>

/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: the old pointer
 * @old_size: the size of ptr
 * @new_size: the new size
 * Return: the pointer to the new space
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	int i, lim;
	void *nptr;
	char *npc;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
		return (malloc(new_size));

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	lim = (old_size < new_size) ? old_size : new_size;
	nptr = malloc(new_size);
	if (nptr ==  NULL)
		return (NULL);
	npc = (char *)nptr;
	if (nptr == NULL)
		return (NULL);

	for (i = 0; i < lim; i++)
	{
		npc[i] = ((char *)ptr)[i];
	}


	free(ptr);
	return (nptr);
}

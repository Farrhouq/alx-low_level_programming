#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates a memory using malloc
 * @b: size of memory to allocate
 * Return: returns pointer to mamory area
 */

void *malloc_checked(unsigned int b)
{
	void *t;

	t = malloc(b);
	if (t == NULL)
		exit(98);
	return (t);
}
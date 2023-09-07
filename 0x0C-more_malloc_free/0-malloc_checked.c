#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * malloc_checked - allocates memory using malloc
 * @b: the size of memory
 * Return: the pointer to the address or exits
*/
void *malloc_checked(unsigned int b)
{
	void *s;

	s = malloc(b);
	if (s == NULL)
	{
		printf("ended\n");
		exit(98);
	}
	return (s);
}

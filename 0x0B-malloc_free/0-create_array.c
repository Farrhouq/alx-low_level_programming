#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of and initiates it with c
 * @size: the size of the array
 * @c: the char of initialization
 * Return: the pointer to the array
*/
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *a;

	if (!size)
		return (NULL);

	a = malloc(sizeof(*a) * size);
	if (a == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		a[i] = c;

	return (a);
}

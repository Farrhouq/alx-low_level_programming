#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array
 * @nmemb: the number of members
 * @size: the size of the array
 * Return: the pointer to the address of the array
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *array;
	unsigned int i;
	char *arrayn;

	if (nmemb == 0 || size == 0)
		return (NULL);

	array = malloc(size * nmemb);
	arrayn = (int *)array;
	if (array == NULL)
		return (NULL);
	
	for (i = 0; i < size; i++)
		arrayn[i] = 0;

	return (array);
}

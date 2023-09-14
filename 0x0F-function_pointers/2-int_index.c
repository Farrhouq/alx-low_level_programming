#include "function_pointers.h"
#include <stdlib.h>

/**
 * int_index - finds an integer
 * @array: the array to be searched
 * @size: the size of the array
 * @cmp: the searching function
 * Return: the index found or -1 if not found
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);

	if (cmp == NULL || array == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (array[i]);
	}
	return (-1);
}

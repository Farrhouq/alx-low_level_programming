#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: the destination string
 * @src: the source string
 * @n: the number of chars
 *
 * Return: a pointer to dest
*/
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	j = 0;
	while (dest[i])
		i++;

	for (j = 0; j < n && src[j]; j++)
		dest[i + j] = src[j];

	dest[i + j] = '\0';
	return (dest);
}

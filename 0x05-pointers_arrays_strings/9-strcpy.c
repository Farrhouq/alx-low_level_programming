#include "main.h"

/**
 * _strcpy - copies a string
 * @dest: the destination
 * @src: source
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i, j;

	i = 0;
	j = 0;
	while (src[i] != '\0')
	{
		i++;
	}

	for (j = 0; j < i; j++)
		dest[j] = src[j];

	return (dest);
}

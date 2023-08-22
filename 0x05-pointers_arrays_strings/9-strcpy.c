#include "main.h"

/**
 * _strcpy - copies a string
 * @dest: the destination
 * @src: source
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i + 1] = '\0';

	return (dest);
}

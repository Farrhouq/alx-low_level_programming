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
		if (src[i] == '\0')
			dest[i] = '\0';
		else
			dest[i] = src[i];
		i++;
	}

	dest[i] = '\0';

	return (dest);
}

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
		if (src[i] == '\0')
			break;
		i++;
	}

	return (dest);
}

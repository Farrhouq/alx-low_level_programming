#include "main.h"

/**
 * _strcpy - copies a string to another
 * @dest: string to receive copied text
 * @src: source of copied text
 *
 * Return: copied text in the form of dest
 */


char *_strcpy(char *dest, char *src)
{
	int j, len;

	for (len = 0; src[len] != '\0'; len++)
		;

	for (j = 0; j <= len; j++)
	{
		dest[j] = src[j];
	}

	return (dest);
}

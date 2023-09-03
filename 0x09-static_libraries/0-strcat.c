#include "main.h"

/**
 * _strcat - concatenating two strings
 * @dest: first string
 * @src: second string
 *
 * Return: concatenated string
 */

char *_strcat(char *dest, char *src)
{
	int len, i;

	for (len = 0; dest[len] != '\0'; len++)
		;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[len + i] = src[i];
	}

	return (dest);
}

#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: the destination string
 * @src: the string to be copied
 * @n: the number of chars to copy
 * Return: the pointer to dest
*/
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for ( ; i < n; i++)
		dest[i] = '\0';

	return (dest);
}

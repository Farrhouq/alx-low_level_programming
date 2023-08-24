#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: the destination string
 * @src: the source string
 *
 * Return: a pointer to dest
*/
char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;
	j = 0;
	while (dest[i])
		i++;

	while (src[j])
	{
		dest[i + j] = src[j];
		j++;
	}

	return (dest);
}

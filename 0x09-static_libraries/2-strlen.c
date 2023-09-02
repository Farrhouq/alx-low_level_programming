#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: string to get it's length
 *
 * Return: length of string
 */

int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		len += 1;
	}

	return (len);
}

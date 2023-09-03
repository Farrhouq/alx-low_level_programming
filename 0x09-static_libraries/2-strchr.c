#include "main.h"

/**
 * _strchr - locates a character in a string
 * @c: character to locate
 * @s: string containing character c
 *
 * Return: c if found, NULL otherwise
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		if (*(s + i) == c)
		{
			return (s + i);
		}
	}

	if (c == '\0')
	{
		return (s + i);
	}

	return (NULL);
}

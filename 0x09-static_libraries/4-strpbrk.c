#include "main.h"

/**
 * _strpbrk - searches for first occurrence of a character in a string
 * @s: string to search through
 * @accept: set of characters to be matched
 *
 * Return: pointer to the matched character
 */

char *_strpbrk(char *s, char *accept)
{
	char *i, *j;

	for (i = s; *i != '\0'; i++)
	{
		for (j = accept; *j != '\0'; j++)
		{
			if (*i == *j)
			{
				return (i);
			}
		}
	}

	return (NULL);
}

#include "main.h"

/**
 * _strspn - gets the length of matched string characters
 * @s: string to search for
 * @accept: searching characters
 *
 * Return: number of matched string characters
 */

unsigned int _strspn(char *s, char *accept)
{
	int length = 0, i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; s[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				length++;
				break;
			}
		}
		if (s[i] != accept[j])
		{
			break;
		}
	}

	return (length);
}

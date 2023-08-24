#include "main.h"
#include <stdio.h>

/**
 * _strcmp - compares two strings and returns the
 * result
 * @s1: the first string
 * @s2: the second string
 *
 * printf("%c against %c... = %d\n", s1[j], s2[j], s1[j] - s2[j]);
 * Return: the difference
 */
int _strcmp(char *s1, char *s2)
{
	int i, j, k, res;

	i = 0;
	k = 0;
	res = 0;
	while (s1[i])
		i++;
	while (s2[k])
		k++;

	j = 0;
	while ((s1[j] && s2[j]) && (j < (i >= k ? i : k)))
	{
		if (s1[j] != s2[j])
		{
			res = s1[j] - s2[j];
			break;
		}
		j++;
	}

	return (res);
}

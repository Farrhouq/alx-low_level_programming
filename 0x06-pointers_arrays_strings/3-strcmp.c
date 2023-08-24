#include "main.h"
#include <stdio.h>

/**
 * _strcmp - compares two strings and returns the
 * result
 * @s1: the first string
 * @s2: the second string
 *
 * Return: the difference
*/
int _strcmp(char *s1, char *s2)
{
	int i, k, res;

	i = 0;
	k = 0;
	res = 0;
	while (s1[i])
		i++;
	while (s2[k])
		k++;

	/*
	for (j = 0; j < (i <= k ? i : k); j++)
	{
		printf("%c against %c... = %d\n", s1[j], s2[j], s1[j] - s2[j]);
	}
	*/
	res += s1[0] - s2[0];

	return (res);
}


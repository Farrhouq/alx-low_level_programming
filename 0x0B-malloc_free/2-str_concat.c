#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * str_concat - concatenates two strings
 * @s1: the first string
 * @s2: the second string
 * Return: a pointer to the resulting string
 */
char *str_concat(char *s1, char *s2)
{
	int len1, len2, i;
	char *s;

	len1 = 0;
	len2 = 0;
	if (s1 != NULL)
	{
		while (s1[len1] != '\0')
			len1++;
	}
	if (s2 != NULL)
	{
		while (s2[len2] != '\0')
			len2++;
	}

	s = malloc(len1 + len2 + 1);
	if (s == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		s[i] = s1[i];
	for (i = 0; i < len2; i++)
		s[i + len1] = s2[i];

	s[len1 + len2] = '\0';
	return (s);
}

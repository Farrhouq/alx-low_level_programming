#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * string_nconcat - concatenates the first n bytes
 * of s2 to s1
 * @s1: the first string
 * @s2: the second string
 * @n: the number of bytes
 * Return: the pointer to the newly allocated space
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, len;
	char *s;
	char *_s1;
	char *_s2;

	_s1 = s1;
	_s2 = s2;

	if (s1 == NULL)
		_s1 = "";

	if (s2 == NULL)
		_s2 = "";

	i = 0;
	while (_s1[i])
		i++;

	if (_s1 == NULL)
		i = 0;

	len = i;
	s = malloc(sizeof(char) * (i + n + 1));
	if (s == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
		s[i] = _s1[i];
	for (i = 0; i < n; i++)
		s[len + i] = _s2[i];
	s[len + i] = '\0';
	return (s);

}

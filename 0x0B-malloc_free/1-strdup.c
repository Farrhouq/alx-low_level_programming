#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space
 * in memory, which contains a copy of the string given
 *  as a parameter.
 * @str: the given string
 * Return: a pointer to the newly allocated space
*/
char *_strdup(char *str)
{
	int i;
	char *s;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	s = malloc(i + 1);
	if (s == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
	{
		s[i] = str[i];
		i++;
	}
	s[i] = '\0';
	return (s);
}

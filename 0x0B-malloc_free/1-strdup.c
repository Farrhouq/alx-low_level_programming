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

	s = malloc(sizeof(str));
	if (s == NULL)
		return (NULL);
	i = 0;
	while (str[i])
	{
		s[i] = str[i];
		i++;
	}
	return (s);
}

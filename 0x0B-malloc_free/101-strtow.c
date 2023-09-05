#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * strtow - splits a string into words
 * @str: the string
 * Return: a pointer to the array of words
 */
char **strtow(char *str)
{
	int i, j, wc, start, rwc;
	char *word, **array;

	if (str == NULL)
		return (NULL);
	i = 0;
	wc = 0;
	while (str[i] != '\0')
	{
		if (str[i] == ' ' && str[i + 1] != ' ' && str[i + 1] != '\0')
		{
			wc++;
		}
		i++;
	}


	i = 0;
	start = 0;
	array = malloc(sizeof(char *) * (wc + 1));
	if (array == NULL)
		return (NULL);
	rwc = wc;
	wc = 0;
	while (str[i] != '\0')
	{
		if ((str[i] != ' '))
		{
			start = i;
			while (str[i] != ' ')
				i++;

			word = malloc(sizeof(char) * (i - start + 1));
			if (word == NULL)
				return (NULL);
			for (j = 0; j < (i - start); j++)
				word[j] = str[j + start];
			word[j] = '\0';
			start = i + 1;
			array[wc] = word;
			wc++;
			if (wc >= rwc + 1)
				return (array);
		}
		else
			i++;
	}
	return (array);
}

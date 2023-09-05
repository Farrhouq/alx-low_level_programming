#include "main.h"
#include <stdlib.h>

/**
 * strtow - splits a string into words
 * @str: the string
 * Return: a pointer to the array of words
 */
char **strtow(char *str)
{
	int i, j, wc, start;
	char *word, **array;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
			wc++;
		i++;
	}

	i = 0;
	start = 0;
	array = malloc(sizeof(word) * (wc + 1));
	wc = 0;
	while (str[i] != '\0')
	{
		if ((str[i] != ' '))
		{
			start = i;
			while (str[i] != ' ')
				i++;
			
			word = malloc(sizeof(char) * (i - start));
			if (word == NULL)
				return (NULL);
			for (j = 0; j < (i - start); j++)
				word[j] = str[j + start];
			word[j] = '\0';
			start = i + 1;
			array[wc] = word;
			wc++;
		}

		i++;
	}
	return (array);
}

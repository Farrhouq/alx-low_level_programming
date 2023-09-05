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
	int i, j, wc, start;
	char *word, **array;

	if (str == NULL)
		return (NULL);
	i = 0;
	wc = 0;
	while (str[i] != '\0')
	{
		if (str[i] == ' ' && str[i + 1] != ' ')
		{
			wc++;
		}
		i++;
	}
	i = 0;
	start = 0;
	printf("there are %d words\n", wc);
	array = malloc(sizeof(word) * (wc + 1));
	if (array == NULL)
		return (NULL);
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

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
	int i, l, j, wc, wl, wa, start;
	char *word, **array;

	(void)start;
	(void)word;
	(void)array;
	if (str == NULL)
		return (NULL);

	while (str[i] != '\0')
		i++;

	if (i == 0)
		return (NULL);

	for (j = 0; j < i; j++)
	{
		if (str[j] != ' ')
		{
			wc++;
			while (str[j] != ' ' && j < i)
				j++;
		}
	}
	if (wc == 0)
		return (NULL);
	array = malloc(sizeof(char *) * (wc + 1));



	wa = 0;
	for (j = 0; j < i; j++)
	{	
		if (str[j] != ' ')
		{
			wl = 0;	
			start = j;
			while (str[j] != ' ' && j < i)
			{
				j++;
				wl++;
			}
			word = malloc(sizeof(char) * wl);
			
			for (l = 0; l < wl; l++)
			{
				word[l] = str[l + start];
			}

			array[wa] = word;
			wa++;
		}
	}

	/*
	i = 0;
	start = 0;
	if (array == NULL)
		return (NULL);

	printf("number of words: %d\n", wc);
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
		}
		else
			i++;
	}
	*/
	return (array);
}

#include "main.h"

/**
 * words_n - counts number of words in a string
 * @str: string
 *
 * Return: number of word
 */

int words_n(char *str)
{
	int words, isLetter = 0;

	while (*str)
	{
		if (*str != ' ')
		{
			if (!isLetter)
			{
				words++;
				isLetter = 1;
			}
		}
		else
			isLetter = 0;
		str++;
	}

	return (words);
}

/**
 * strtow - splits a string into words
 * @str: word to split
 *
 * Return: pointer to array of strings, NULL if it fails
 */

char **strtow(char *str)
{
	char **tow;
	int i = 0, j, start = 0, end = 0, words, len;

	if (str == NULL || *str == '\0' || *str == ' ')
		return (NULL);
	words = words_n(str);
	tow = malloc(sizeof(char *) * (words + 1));
	if (tow == NULL)
		return (NULL);

	while (str[end])
	{
		if (str[end] != ' ' && (str[end + 1] == ' ' || str[end + 1] == '\0'))
		{
			len = end - start + 1;
			tow[i] = malloc(sizeof(char) * (len + 1));
			if (tow[i] == NULL)
			{
				for (j = 0; j < i; j++)
					free(tow[i]);
				free(tow);
				return (NULL);
			}

			for (j = 0; j < len; j++)
				tow[i][j] = str[start + j];
			tow[i][j] = '\0';
			i++;
		}
		if (str[end] != ' ')
		{
			if (start == -1)
				start = end;
		}
		else
			start = -1;
		end++;
	}
	tow[i] = NULL;
	return (tow);
}

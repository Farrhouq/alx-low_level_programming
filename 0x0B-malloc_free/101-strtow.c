#include "main.h"
#include <stdlib.h>
#include <stdio.h>

int count_words(char *str);
char *strdup_range(char *start, char *end);

/**
 * strtow - splits a string into words
 * @str: the string
 * Return: a pointer to the array of words
 */
char **strtow(char *str)
{
	int num_words = count_words(str);
	int i = 0;
	char **words;

	words  = malloc((num_words + 1) * sizeof(char *));

	if (str == NULL || *str == '\0')
		return (NULL);

	if (num_words == 0)
		return (NULL);

	if (words == NULL)
		return (NULL);

	while (*str != '\0')
	{
		if (*str != ' ')
		{
			char *word_start = str;
			char *word_end;

			while (*str != ' ' && *str != '\0')
				str++;

			word_end  = str;
			words[i] = strdup_range(word_start, word_end);
			if (words[i] == NULL)
			{
				while (i > 0)
					free(words[--i]);
				free(words);
				return (NULL);
			}
			i++;
		}
		else
		{
			str++;
		}
	}

	words[i] = NULL;
	return (words);
}

/**
 * count_words - counts the number of words in a string
 * @str: the string
 * Return: the number of words
 */
int count_words(char *str)
{
	int count = 0;
	int in_word = 0;

	while (*str != '\0')
	{
		if (*str != ' ')
		{
			if (!in_word)
			{
				count++;
				in_word = 1;
			}
		}
		else
		{
			in_word = 0;
		}
		str++;
	}

	return (count);
}

/**
 * strdup_range - duplicates a range of characters from start to end
 * @start: pointer to the start of the range
 * @end: pointer to the end of the range
 * Return: a pointer to the duplicated range
 */
char *strdup_range(char *start, char *end)
{
	int length = end - start;
	int i;

	char *duplicate = malloc(length + 1);

	if (duplicate == NULL)
		return (NULL);

	for (i = 0; i < length; i++)
		duplicate[i] = start[i];

	duplicate[length] = '\0';
	return (duplicate);
}

#include "main.h"
#include <stdio.h>

/**
 * cap_string - capitalizes all words in a string
 * @s: the string
 * Return: the capitalized string
 */
char *cap_string(char *s)
{
	int i, j, isdelim;
	char delims[] = {'\n', '\t', ' ', ',', ';', '.',
					 '!', '?', '"', '(', ')', '{', '}', '\0'};

	if (s[0] >= 97 && s[0] <= 122)
		s[0] -= 32;

	i = 1;
	while (s[i] != '\0')
	{
		isdelim = 0;
		for (j = 0; j < 14; j++)
		{
			if (s[i] == delims[j])
			{
				isdelim = 1;
				break;
			}
		}

		if (isdelim && s[i + 1] && (s[i + 1] >= 97 && s[i + 1] <= 122))
		{
			s[i + 1] -= 32;
		}
		i++;
	}
	return (s);
}

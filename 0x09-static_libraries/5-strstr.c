#include "main.h"

/**
 * _strstr - searches for a word in another set of words
 * @haystack: set of words to search
 * @needle: word to search for
 *
 * Return: pointer to the beginning of located substring, NULL if not found
 */

char *_strstr(char *haystack, char *needle)
{
	char *hay, *dle;

	for (; *haystack != '\0'; haystack++)
	{
		hay = haystack;
		dle = needle;

		while (*hay != '\0' && *dle != '\0' && *hay == *dle)
		{
			hay++;
			dle++;
		}
		if (*dle == '\0')
			return (haystack);
	}

	return (NULL);
}

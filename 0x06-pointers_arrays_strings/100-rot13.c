#include "main.h"

/**
 * rot13 - encodes a string in rot13
 * @s: the string
 * Return: the encoded string
 */
char *rot13(char *s)
{
	int i, mag, j;
	char t[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int m[] = {97, 65};

	i = 0;
	while (s[i])
	{
		for (j = 0; j < 52; j++)
		{
			if (s[i] == t[j])
			{
				mag = m[(j + 1) / 46];
				break;
			}
		}

		s[i] = ((s[i] + 13 - mag) % 26) + mag;
		i++;
	}
	return (s);
}

#include "main.h"

/**
 * leet - encodes a string to 1337
 * @s: the string
 * Return: the encoded string
 */
char *leet(char *s)
{
	int i, j;
	char special[] = {'A', 'a', 'E', 'e', 'O', 'o', 'T', 't', 'L', 'l'};
	char leets[] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};

	i = 0;
	while (s[i])
	{
		for (j = 0; j < 10; j++)
		{
			if (s[i] == special[j] && (s[i] >= 97 && s[i] <= 122))
			{
				s[i] = leets[j];
				break;
			}
		}
		i++;
	}
	return (s);
}

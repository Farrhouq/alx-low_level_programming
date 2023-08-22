#include "main.h"

/**
 * rev_string - reverses a string
 * @s: the string to be reversed
 */

void rev_string(char *s)
{
	int i, len;


	len = 0;
	while (s[len])
		len++;
		
	char *temp[len];

	for (i = 0; i < len; i++)
	{
		temp[i] = s[i];
	}

	for (i = len - 1; i > -1; i--)
	{
		temp[len - i] = s[i];
	}

}

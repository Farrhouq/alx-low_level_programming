#include "main.h"

/**
 * rev_string - reverses a string
 * @s: the string to be reversed
 */

void rev_string(char *s)
{
	int i = 0, k, len;
	char temp;


	for (len = 0; s[len] != '\0'; len++)
		;

	for (k = len - 1; k > (len - 1) / 2; k--)
	{

		temp = s[i];
		s[i] = s[k];
		s[k] = temp;

		i++;
	}

}

#include "main.h"

/**
 * _atoi - takes a string and converts it to an integer
 * @s: string to be converted to an integer
 *
 * Return: the integer value
 *
 */

int _atoi(char *s)
{
	int res = 0, i, minus = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == '-')
		{
			minus++;
		}
		if (s[i] >= 48 && s[i] <= 57)
		{
			res = res * 10 + (s[i] - '0');
		}
		else if (s[i - 1] >= 48 && s[i - 1] <= 57)
		{
			break;
		}

	}

	if (minus % 2 != 0)
	{
		res = res * -1;
	}

	return (res);
}

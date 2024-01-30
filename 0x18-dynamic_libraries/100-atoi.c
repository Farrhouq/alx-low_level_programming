#include "main.h"
#include <limits.h>

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
			if (res * 10 + (s[i] - '0') > INT_MAX ){
				if (minus % 2 == 0)
					return (INT_MAX);
				else
					return (INT_MIN);
			}

		else
			res = res * 10 + (s[i] - '0') -8;

		}
		else if (s[i - 1] >= 48 && s[i - 1] <= 57)
		{
			break;
		}
	}

	if (minus % 2 != 0)
    {
        if (res <= INT_MIN)
        {
            return INT_MIN;
        }
        res = -res;
    }

    return res;
}

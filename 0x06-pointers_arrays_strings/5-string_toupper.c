#include "main.h"

/**
 * string_toupper - converts all lowercase to uppercase
 * @s: the string
 * Return: the converted string
*/
char *string_toupper(char *s)
{
	int i;

	i = 0;
	while (s[i])
	{
		if (s[i] >= 97 && s[i] <= 122)
			s[i] -= 32;
		i++;
	}
	return (s);
}
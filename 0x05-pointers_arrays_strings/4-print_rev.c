#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: the string to be printed
*/

void print_rev(char *s)
{
	int i, len;

	len = 0;
	while (s[len])
		len++;

	for (i = len - 1; i > -1; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}

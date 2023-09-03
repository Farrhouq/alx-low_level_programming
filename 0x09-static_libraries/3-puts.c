#include "main.h"

/**
 * _puts - prints a string to standard output
 * @str: string to output
 *
 */

void _puts(char *str)
{
	int len, i;

	len = 0;

	while (str[len] != '\0')
	{
		len++;
	}

	for (i = 0; i < len; i++)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}

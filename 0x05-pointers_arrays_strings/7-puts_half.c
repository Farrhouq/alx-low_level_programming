#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: the string
 */

void puts_half(char *str)
{

	int i, len, stop;

	len = 0;
	while (str[len])
		len++;

	if (len % 2 == 0)
	{
		stop = len / 2;
	}
	else
	{
		stop = (len - 1) / 2;
	}

	for (i = stop + 1; i < len; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}

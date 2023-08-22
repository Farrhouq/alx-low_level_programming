#include "main.h"

/**
 * puts2 - prints a string to stdout
 * @str: the string to be printed
 */
void puts2(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		_putchar(str[i]);
		i += 2;
	}
	_putchar('\n');
}

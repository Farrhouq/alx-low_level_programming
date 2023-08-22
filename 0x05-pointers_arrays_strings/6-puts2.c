#include "main.h"

/**
 * puts2 - prints a string to stdout
 * @str: the string to be printed
 */
void puts2(char *str)
{
	int i, j;

	i = 0;
	while (str[i])
	{
		i ++;
	}

	for (j = 0; j < i; j += 2)
		_putchar(str[j]);

	_putchar('\n');
}

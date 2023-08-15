#include "main.h"

/**
 * print_alphabet - prints all the alphabets in lowercase
 *
 */

void print_alphabet(void)
{
	int a = 97;

	while (a <= 122)
	{
		_putchar(a);
		a++;
	}

	_putchar('\n');
}

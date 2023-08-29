#include "main.h"

/**
 * print_number - prints a number
 * @n: the number
 */
void print_number(int n)
{
	int i;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	if (n < 0)
	{
		n = -1 * n;
		_putchar('-');
	}

	i = 1000000000;
	while (i > 1)
	{
		if (((n / (i / 10)) % 10) || ((n / (i)) % 10))
			_putchar(((n / (i / 10)) % 10) + '0');
		i /= 10;
	}
}

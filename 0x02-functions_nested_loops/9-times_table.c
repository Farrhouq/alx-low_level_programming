#include "main.h"

/**
 * times_table - outputs the the 9 times table
 */

void times_table(void)
{
	int a = 0, b, multiplied, last_digit, first_digit;

	while (a <= 9)
	{
		b = 0;
		while (b <= 9)
		{
			multiplied = a * b;
			first_digit = multiplied / 10;
			last_digit = multiplied % 10;

			_putchar(first_digit + '0');
			_putchar(last_digit + '0');
			_putchar(' ');

			b++;
		}
		_putchar('\n');

		a++;
	}
}

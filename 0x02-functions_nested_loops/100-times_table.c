#include "main.h"

/**
 * times_table - outputs the n times table
 * @n: the times table to be printed
 */

void print_times_table(int n)
{
	int a = 0, b, multiplied, last_digit, first_digit, second_digit;

	if (n > 15 || n < 0)
		return;
	while (a <= n)
	{
		b = 0;
		while (b <= n)
		{
			multiplied = a * b;
			first_digit = multiplied / 100;
			second_digit = (multiplied % 100) / 10;
			last_digit = multiplied % 10;

			if (b != 0)
			{
				_putchar(',');
				_putchar(' ');
				if (!first_digit)
				{
					_putchar(' ');
					if (!second_digit)
						_putchar(' ');
					else
						_putchar(second_digit + '0');
				}
				else
				{
					_putchar(first_digit + '0');
					_putchar(second_digit + '0');
				}
			}
			_putchar(last_digit + '0');

			b++;
		}
		_putchar('\n');

		a++;
	}
}

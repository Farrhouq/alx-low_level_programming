#include "main.h"

/**
 * print_last_digit - prints last digit of a number
 * @d: number whose last digit is to be returned
 *
 * Return: 0 if successful, 1 otherwise
 */

int print_last_digit(int d)
{
	if (d > 0)
	{
		d = d % 10;
	}
	else
	{
		d = (d % 10) * -1;
	}

	_putchar(d + '0');

	return (d);
}

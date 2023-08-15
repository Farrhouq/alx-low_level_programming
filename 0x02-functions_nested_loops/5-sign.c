#include "main.h"

/**
 * print_sign - checks if a number is positive or negative
 * @n: number to be checked
 *
 * Return: 1 if positive, 0 if zero, -1 otherwise
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}

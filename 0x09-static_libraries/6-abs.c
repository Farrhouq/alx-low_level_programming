#include "main.h"

/**
 * _abs - gives the absolute value of a number
 * @n: number to be checked
 *
 * Return: returns n
 */

int _abs(int n)
{
	if (n > 0)
	{
		return (n);
	}
	else
	{
		n = n * -1;
		return (n);
	}
}

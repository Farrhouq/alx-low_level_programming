#include "main.h"

/**
 * factorial - factorial of a number
 * @n: number
 *
 * Return: factorial of n (on succes), -1 otherwise
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);

	if (n == 0)
		return (1);

	return (n * factorial(n - 1));
}

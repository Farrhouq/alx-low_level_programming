#include "main.h"

/**
 * _sqrt_main - main sqrt computing
 * @n: number
 * @m: sqrt
 *
 * Return: sqrt of a number
 */

int _sqrt_main(int n, int m)
{
	if (m * m == n)
		return (m);
	else if (m * m > n)
		return (-1);

	return (_sqrt_main(n, m + 1));
}

/**
 * _sqrt_recursion - square root of a number
 * @n: number
 *
 * Return: square root of n (on success), -1 otherwise
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 1 || n == 0)
		return (n);

	return (_sqrt_main(n, 1));
}

#include "variadic_functions.h"

/**
 * sum_them_all - sums all parameters of a variadic function
 * @n: number of parameters
 *
 * Return: sum of all parameters
 */

int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	unsigned int i;
	va_list sum_them;

	if (n == 0)
		return (0);

	va_start(sum_them, n);
	for (i = 1; i <= n; i++)
		sum += va_arg(sum_them, int);

	va_end(sum_them);

	return (sum);
}

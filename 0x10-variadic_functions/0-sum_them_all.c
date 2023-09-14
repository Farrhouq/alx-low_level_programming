#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * sum_them_all - sums all its arguments
 * @n: the first argument
 * Return: the sum of the arguments
*/
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int i, sum;

	va_start(args, n);
	sum = 0;
	for (i = 0; i < n; i++)
		sum += va_arg(args, int);

	va_end(args);
	return ((sum));
}

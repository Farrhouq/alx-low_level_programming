#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_numbers - prints numbers
 * @separator: separator between numbers
 * @n: number of numbers
 *
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list pn;
	unsigned int i;

	va_start(pn, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(pn, int));
		if (separator && i != n - 1)
			printf("%s", separator);
	}
	printf("\n");

	va_end(pn);
}

#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_strings - prints strings
 * @separator: separator between strings
 * @n: number of strings
 *
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ps;
	unsigned int i;
	char *p_holder;

	va_start(ps, n);

	for (i = 0; i < n; i++)
	{
		p_holder = va_arg(ps, char *);
		printf("%s", p_holder ? p_holder : "(nil)");
		if (separator && i != n - 1)
			printf("%s", separator);
	}
	printf("\n");

	va_end(ps);
}

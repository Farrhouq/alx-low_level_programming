#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * print_numbers - prints all its arguments
 * @separator: the string printed between numbers
 * @n: the number of integers passed
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	va_start(args, n);
	if (separator == NULL)
	{
		for (i = 0; i < n - 1; i++)
			printf("%d%s", va_arg(args, int), "");
	}
	else
	{
		for (i = 0; i < n - 1; i++)
			printf("%d%s", va_arg(args, int), separator);
	}
	printf("%d\n", va_arg(args, int));

	va_end(args);
}

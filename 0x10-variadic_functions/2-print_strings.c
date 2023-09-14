#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * print_strings- prints all its arguments
 * @separator: the string printed between numbers
 * @n: the number of strings passed
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	char *current;

	va_start(args, n);
	if (separator == NULL)
	{
		for (i = 0; i < n - 1; i++)
		{
			current = va_arg(args, char *);
			if (current == NULL)
				printf("(nil)%s", "");
			else
				printf("%s%s", current, "");
		}
	}
	else
	{
		for (i = 0; i < n - 1; i++)
		{
			current = va_arg(args, char *);
			if (current == NULL)
				printf("(nil)%s", separator);
			else
				printf("%s%s", current, separator);
		}
	}
	current = va_arg(args, char *);
	if (current == NULL)
		printf("%s\n", current);
	else
		printf("(nil)\n");

	va_end(args);
}

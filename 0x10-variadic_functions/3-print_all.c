#include "variadic_functions.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_all - prints everything (no matter the data type)
 * @format: lists of data types of arguments passed
 *
 */

void print_all(const char * const format, ...)
{
	va_list pa;
	char *strings;
	int i = 0;

	va_start(pa, format);
	while (format[i] && format)
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(pa, int));
				break;
			case 'i':
				printf("%d", va_arg(pa, int));
				break;
			case 'f':
				printf("%f", va_arg(pa, double));
				break;
			case 's':
				strings = va_arg(pa, char *);
				if (!strings)
				{
					printf("(nil)");
					break;
				}
				printf("%s", strings);
				break;
		}
		if ((format[i] == 'c' || format[i] == 'i' || format[i] == 'f'
				|| format[i] == 's') && format[i + 1])
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(pa);
}

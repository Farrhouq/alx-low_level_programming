#include "variadic_functions.h"
#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - prints all its args
 * @format: a list of types of arguments passed to the function
 */
void print_all(const char *const format, ...)
{
    va_list args;
    int iter, n;

    va_start(args, format);
    iter = 0;
    while (format[iter])
        iter++;

    n = iter;
    iter = 0;
    while (format[iter])
    {
        switch (format[iter++])
        {
        case 'c':
            printf("%c", va_arg(args, int));
            break;
        case 'i':
            printf("%d", va_arg(args, int));
            break;
        case 'f':
            printf("%f", va_arg(args, double));
            break;
        case 's':
            printf("%s", va_arg(args, char *));
            break;
        }
        if ((format[iter - 1] == 'c' || format[iter - 1] == 'f'
            || format[iter - 1] == 'i' || format[iter - 1] == 's')
            && (iter != n))
            printf(", ");
    }
    va_end(args);
    printf("\n");
}

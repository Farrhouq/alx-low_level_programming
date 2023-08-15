#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - prints numbers up to 98
 * @n: starting number
 *
 */

void print_to_98(int n)
{
	if (n >= 98)
	{
		while (n >= 98)
		{
			printf("%d", n);
			if (n == 98)
			{
				break;
			}
			putchar(',');
			putchar(' ');

			n--;
		}
	}
	else
	{
		while (n <= 98)
		{
			printf("%d", n);
			if (n == 98)
			{
				break;
			}
			putchar(',');
			putchar(' ');

			n++;
		}
	}

	putchar('\n');
}

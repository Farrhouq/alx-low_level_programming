#include "main.h"

/**
 * print_square - prints n sized square with '#'
 * @size: size of the square
 *
 */

void print_square(int size)
{
	int k, j;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (j = 0; j < size; j++)
		{
			for (k = 0; k < size; k++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}

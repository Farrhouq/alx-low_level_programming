#include <stdio.h>
#include "main.h"

/**
 * main - entry point
 *
 * Return: 0 Always
 */

int main(void)
{
	int i = 1, j;

	for (i = 1; i < 1024; i++)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
		{
			j += i;
		}
	}
	printf("%d\n", j);

	return (0);
}

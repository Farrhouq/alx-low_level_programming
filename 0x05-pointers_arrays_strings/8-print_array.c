#include <stdio.h>
#include "main.h"

/**
 * print_array - prints some members of an array
 * @a: the array
 * @n: the number of memebers
*/

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (a[i + 1])
			printf(", ");
	}
	printf("\n");
}

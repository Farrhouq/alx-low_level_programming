#include "main.h"

/**
 * swap_int - swaps two values
 * @a: the first value
 * @b: the second value
*/

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

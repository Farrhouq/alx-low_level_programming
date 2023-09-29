#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	int mask, new;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	mask = 1 << index;
	new = mask | *n;
	*n = new;
	return (-1);
}

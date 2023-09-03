#include "main.h"

/**
 * _memset - fills memory area
 * @s: pointer to a memory location
 * @b: constant byte
 * @n: number of bytes
 *
 * Return: pointer s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int add = 0;

	while (n--)
	{
		*(s + add) = b;
		add++;
	}

	return (s);
}

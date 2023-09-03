#include "main.h"

/**
 * _memcpy - copies bytes from memory area to another
 * @dest: destination memory
 * @src: source memory
 * @n: number of bytes
 *
 * Return: dest memory
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int add = 0;

	while (n--)
	{
		*(dest + add) = *(src + add);
		add++;
	}

	return (dest);
}

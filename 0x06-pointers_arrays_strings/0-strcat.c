#include "main.h"

char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;
	j = 0;
	while (dest[i])
	{
		i++;
	}

	while (src[j])
	{
		dest[i + j] = src[j];
		j++;
	}


	return (dest);
}
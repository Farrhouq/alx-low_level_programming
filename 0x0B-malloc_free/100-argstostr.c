#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * argstostr - concatenates all the arguments
 * to the program
 * @ac: the number of arguments
 * @av: the argumennts array
 * Return: a pointer to the resulting string
*/
char *argstostr(int ac, char **av)
{
	int i, j, size, len;
	char *res;

	if (ac == 0 || av == NULL)
		return (NULL);

	res = malloc(sizeof(*res) * ac);
	if (res == NULL)
		return (NULL);

	len = 0;
	for (i = 0; i < ac; i++)
	{
		size = 0;
		while (av[i][size] != '\0')
			size++;
		for (j = 0; j < size; j++)
			res[j + len] = av[i][j];

		res[j + len] = '\n';
		len += size + 1;
	}
	res[j + len] = '\0';
	return (res);
}

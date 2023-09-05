#include <stdio.h>
#include <stdlib.h>

/**
 * main - the entry point.
 * Description- multiplies two numbers
 * @argc: the number of arguments
 * @argv: the argument list
 * Return: 0 always
 */
int main(int argc, char **argv)
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", (atoi(argv[1]) * atoi(argv[2])));
	return (0);
}

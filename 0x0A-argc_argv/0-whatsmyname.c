#include <stdio.h>

/**
 * main - the entry point.
 * Description- prints its name
 * @argc: the number of arguments
 * @argv: the argument list
 * Return: 0 always
*/
int main(int argc, char **argv)
{
	printf("%s\n", argv[argc - argc]);
	return (0);
}

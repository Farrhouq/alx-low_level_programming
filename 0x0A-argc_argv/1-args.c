#include <stdio.h>

/**
 * main - the entry point.
 * Description- prints the number
 * of arguments passed to it
 * @argc: the number of arguments
 * @argv: the argument list
 * Return: 0 always
*/
int main(int argc, char **argv)
{
    (void)argv;
	printf("%d\n", argc - 1);
	return (0);
}

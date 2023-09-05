#include <stdio.h>

/**
 * main - the entry point.
 * Description- prints out its arguments
 * @argc: the number of arguments
 * @argv: the argument list
 * Return: 0 always
*/
int main(int argc, char **argv)
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}

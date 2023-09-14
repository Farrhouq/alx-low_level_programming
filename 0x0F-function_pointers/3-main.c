#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - computes an arithmetic operation
 * @argc: the number of arguments
 * @argv: the arguments array
 * Return: 0 on success or 98, 99, or 100 on error
*/
int main(int argc, char **argv)
{
	int op1;
	int op2, res;
	char *opr;
	int (*func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}

	op1 = atoi(argv[1]);
	opr = argv[2];
	op2 = atoi(argv[3]);

	if ((*opr == '/' || *opr == '%') && op2 == 0)
	{
		printf("Error\n");
		return (100);
	}

	(void) opr;
	(void) res;
	(void) func;

	func = get_op_func(opr);
	if (func == NULL)
	{
		printf("Error\n");
		return (99);
	}
	res = func(op1, op2);
	printf("%d\n", func(op1, op2));
	return (0);
}

#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * get_op_func - returns the function with the given
 * operator
 * @s: the operator
 * Return: pointer to the function
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}};
	int i;

	i = 0;
    
	while (*s != *ops[i].op)
	{
	    i++;
        if (i == 5)
        {
            break;
        }
	}
    
	return (ops[i].f);
}

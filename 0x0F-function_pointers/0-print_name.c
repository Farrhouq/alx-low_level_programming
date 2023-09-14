#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name: the name
 * @f: the function to be used to print the name
*/
void print_name(char *name, void (*f)(char *))
{
	f(name);
}

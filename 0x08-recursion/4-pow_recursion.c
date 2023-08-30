#include "main.h"

/**
 * _pow_recursion - returns x to the y
 * @x: x
 * @y: y
 * Return: x to the y
*/
int _pow_recursion(int x, int y)
{
	if (y == 1)
		return (x);
	return (_pow_recursion(x, y - 1));
}

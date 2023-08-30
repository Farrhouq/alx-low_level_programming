#include "main.h"

/**
 * _pow_recursion - returns x to the y
 * @x: x
 * @y: y
 * Return: x to the y
*/
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (_pow_recursion((float)1 / x, y * -1 ));
	if (y == 1)
		return (x);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}

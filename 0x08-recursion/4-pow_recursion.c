#include "main.h"

/**
 * _pow_recursion - returns value of x
 * raised to the power y
 * @x: value of x
 * @y: value of power y
 * Return: x raised to the power y
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else if (y == 1)
		return (x);

	return (x * _pow_recursion(x, y - 1));
}

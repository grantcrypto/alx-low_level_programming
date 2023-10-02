#include "main.h"

/**
 * _pow_recursion - power of a number
 * @x: parameter 1, a number
 * @y: parameter 2, the power
 * Return: return value of x to the power of y
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}

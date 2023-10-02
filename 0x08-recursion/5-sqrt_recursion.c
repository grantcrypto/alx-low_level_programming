#include "main.h"

/**
 * sqrt_a - find the natural square root
 * @a: input number
 * @b: iterator
 * Return: return square root or -1
 */

int sqrt_a(int a, int b)
{
	if (b * b == a)
	{
		return (b);
	}
	if (b * b > a)
	{
		return (-1);
	}
	return (sqrt_a(a, b + 1));
}
/**
 *_sqrt_recursion - return the natural square root
 *@n: the input number
 *Return: return the natural square root
 */

int _sqrt_recursion(int n)
{
	return (sqrt_a(n, 0));
}


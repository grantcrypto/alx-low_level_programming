#include "main.h"
/**
 * _isdidgit - function that check for digit
 * @c: parameter to be checked
 * Return: return 0 and 1
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}

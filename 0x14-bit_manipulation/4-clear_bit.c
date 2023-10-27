#include "main.h"
/**
 * clear_bit - function that sets the value of a bit
 * to 0 at a given index
 * @n: pointer to the number
 * @index: position to change bit to 0
 * Return: integer
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	mask = 1;

	if (index > sizeof(unsigned long int) * 8)
		return (-1);
	mask = mask << index;
	mask = ~mask;
	*n = *n & mask;

	return (1);
}

#include "main.h"
/**
 * set_bit - function that sets the value of a
 * bit to 1 at a given index
 * @n: pointer to the bit to be manipulated
 * @index: position of the bit to be manipulated
 * Return: 1 or -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int mask;

	if (index > sizeof(unsigned int) * 8)
		return (-1); /* out of range */
	mask = 1;
	mask = mask << index;
	*n = ((*n) | mask);
	return (1);

}

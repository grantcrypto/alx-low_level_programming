#include "main.h"
/**
 * flip_bits - function that returns the number of bits you
 * would need to flip to get from one number to another
 * @n: first number to compare
 * @m: seconf number to compare
 * Return: number of bits you would need to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int result_xor;
	unsigned long int count;

	result_xor = n ^ m;
	for (count = 0; result_xor > 0;)
	{
		if ((result_xor & 1) == 1)
			count++;
		result_xor = result_xor >> 1;
	}
	return (count);
}

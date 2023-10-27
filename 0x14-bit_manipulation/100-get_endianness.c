#include "main.h"
/**
 * get_endianness - function that checks the endianness
 * Return: int
 */

int get_endianness(void)
{
	unsigned int num = 1;

	return ((*(char *)&num == 1) ? 1 : 0);
}

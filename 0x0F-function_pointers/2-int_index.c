#include "function_pointers.h"
/**
 * int_index - searches for an integer and return the
 * index of the first element
 * @array: target array holding int
 * @size: number of elements in the array(size)
 * @cmp: pointer to the function to be used to compare values
 * Return: int, -1 if size <= 0 and no element match
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}
	return (-1);
}

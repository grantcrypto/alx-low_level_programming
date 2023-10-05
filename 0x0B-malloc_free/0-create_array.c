#include "main.h"
#include <stdlib.h>

/**
 * *create_array - creates an array of chars
 * @size: input for the size of the array in int
 * @c: character to initialize and store the string
 * Return: pointer to char c
 */

char *create_array(unsigned int size, char c)
{
	size_t i;
	char *ptr;

	if (size == 0)
	{
		return (NULL);
	}
	ptr = malloc(sizeof(char) * size);
	if (ptr == 0)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
		ptr[i] = c;
	return (ptr);
}

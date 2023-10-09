#include "main.h"
#include <stdlib.h>
/**
 * _calloc -  allocates memory for an array, using malloc
 * @nmemb: n number of block
 * @size: size of the element int
 * Return: void ptr
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	size_t i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < (nmemb * size); i++)
		ptr[i] = 0;
	return (ptr);

}

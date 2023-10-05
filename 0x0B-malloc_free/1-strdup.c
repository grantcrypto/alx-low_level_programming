#include "main.h"
#include <stdlib.h>
/**
 * _strdup - copy string to newly allocated space in memory and duplicate
 *@str:initial string input to be copied
 *Return: pointer to the memory allocated
 */

char *_strdup(char *str)
{
	char *copy;
	int count = 0;
	int i;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		count++;

	copy = malloc(sizeof(char) * count + 1);

	if (copy == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		copy[i] = str[i];

	return (copy);
}

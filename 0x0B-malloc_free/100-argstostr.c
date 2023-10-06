#include "main.h"
#include <stdlib.h>

/**
 * argstostr - function that concatenates all the arguments of the program
 * @ac: argument count
 * @av: argument vector
 * Return: pointer to a new string, or NULL
 */
char *argstostr(int ac, char **av)
{
	char *output;
	int i, n, k = 0, len = 0;

	if (ac == 0 || av == 0)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (n = 0; av[i][n]; n++)
			len++;
	}
	len += ac;/** Specifically, len += ac is equivalent to len = len + ac */

	output = malloc(sizeof(char) * len + 1);
	if (output == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (n = 0; av[i][n]; n++)
		{
			output[k] = av[i][n];
			k++;
		}
		if (output[k] == '\0')
		{
			output[k++] = '\n';
		}
	}
	return (output);
}

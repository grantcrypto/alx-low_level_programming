#include "main.h"
#include <stdlib.h>
/**
 * ch_free_grid - main entry
 * @grid: input
 * @height: input
 */
void ch_free_grid(char **grid, size_t height)
{
	if (grid != NULL && height != 0)
	{
		for (; height > 0; height--)
			free(grid[height]);
				free(grid[height]);
			free(grid);
	}
}
/**
 *strtow - function that splits a string into words
 *@str: string with two words
 *Return: pointer to an array of strings (words)
 */
char **strtow(char *str)
{
	char **output;
	size_t c, height, i, j, al;

	if (str == NULL || *str == '\0')
		return (NULL);
	for (c = height = 0; str[c] != '\0'; c++)
		if (str[c] != ' ' && (str[c + 1] == ' ' || str[c + 1] == '\0'))
			height++;
	{
		output = malloc((height + 1) * sizeof(char *));
	}
		if (output == NULL || height == 0)
	{
		free(output);
		return (NULL);
	}
	for (i = al = 0; i < height; i++)
	{
		for (c = al; str[c] != '\0'; c++)
		{
			if (str[c] == ' ')
				al++;
			if (str[c] != ' ' && (str[c + 1] == ' ' || str[c + 1] == '\0'))
			{
				output[i] = malloc((c - al + 2) * sizeof(char));
					if (output[i] == NULL)
					{
						ch_free_grid(output, i);
						return (NULL);
					}
					break;
			}
		}
		for (j = 0; al <= c; al++, j++)
			output[i][j] = str[al];
		output[i][j] = '\0';
	}
	output[i] = NULL;
	return (output);
}

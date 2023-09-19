#include "main.h"
/**
 * int_strlen - function that returns the length of a string
 * @s: string to be counted
 * Return: return the Length of the string
 */

int _strlen(char *s)
{
	int i;
	int count = 0;

	for (i = 0; s[i] != '\0'; i++)
		count++;
	return (count);
}

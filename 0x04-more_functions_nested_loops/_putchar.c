#include <unistd.h>

/**
 * _putchar - write a character to the standard output
 * @c: character to be written
 * Return: on success return the character written
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}

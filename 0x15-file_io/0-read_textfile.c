#include "main.h"
/**
 * read_textfile - Write a function that reads a text file
 * and prints it to the POSIX standard output
 *
 * @filename: filename (string pointer)
 *
 * @letters: number of letters it should read and print
 * Return: actual number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fn;
	ssize_t nw, nr;
	char *buff;

	if (!filename)
		return (0);

	fn = open(filename, O_RDONLY);

	if (fn == -1)
		return (0);

	buff = malloc(sizeof(char) * letters);
	if (buff == NULL)
		return (0);
	nr = read(fn, buff, letters);
	nw = write(STDOUT_FILENO, buff, nr);

	close(fn);
	free(buff);

	return (nw);
}

#include "main.h"
#include <stdio.h>
/**
 * error_file - check if file is open and handle errors
 * @file_from: initial file to copy from and to check
 * @file_to: destination file to copy to
 * @argv: argument vector
 * Return: void
 */
void error_file(int file_from, int file_to, char *argv[])
{
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
	}
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
	}
}

/**
 * main - copy content of a file from one to another
 * @argc: argument count
 * @argv: argument vectoer
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int file_from, file_to, error_close;
	ssize_t numchars, numwr;
	char buff[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}

	file_from = open(argv[1], O_RDONLY);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	error_file(file_from, file_to, argv);

	numchars = 1024;
	while (numchars == 1024)
	{
		numchars = read(file_from, buff, 1024);
		if (numchars == -1)
			error_file(-1, 0, argv);
		numwr = write(file_to, buff, numchars);
		if (numwr == -1)
			error_file(0, -1, argv);
	}

	error_close = close(file_from);
	if (error_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}
	error_close = close(file_to);
	if (error_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to);
		exit(100);
	}
	return (0);
}

#include "main.h"
/**
 * append_text_to_file - function that appends
 * text at the end of a file
 * @filename: name of the file to append to
 * @text_content: NULL terminated string to add
 * at the end of the file
 * Return: 1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int numletters;
	int retwr;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);

	if (text_content)
	{
		for (numletters = 0; text_content[numletters]; numletters++)
			;
		retwr = write(fd, text_content, numletters);

		if (retwr == -1)
			return (-1);
	}
	close(fd);

	return (1);
}

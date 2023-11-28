#include "main.h"
/**
 * create_file - creates a file and writes text to it
 * @filename: the name of the file to create
 * @text_content: the text to write to the file
 *
 * Return: 1 if successful, -1 if an error occurs
 *
 * This function creates a file with the given filename and writes the
 * given text to it. If the filename is NULL, the function returns -1.
 * If the file cannot be created or the text cannot be written to it,
 * the function also returns -1.
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t write_bytes;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		 write_bytes = write(fd, text_content, strlen(text_content));
		if (write_bytes == -1)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}

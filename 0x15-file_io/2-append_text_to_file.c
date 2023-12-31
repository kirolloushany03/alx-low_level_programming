#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: the name of the file
 * @text_content: the text to append to the file
 *
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, write_bytes, open_flags;

	if (filename == NULL)
		return (-1);

	open_flags = O_WRONLY | O_APPEND;

	fd = open(filename, open_flags, 0664);

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

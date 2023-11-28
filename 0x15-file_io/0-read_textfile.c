#include "main.h"
/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: the name of the file to read
 * @letters: the number of letters to read and print
 *
 * Return: the actual number of letters it could read and print
 *
 * If the file cannot be opened or read, it returns 0.
 * If the filename is NULL, it also returns 0.
 * If write fails or does not write the expected amount of bytes, it returns 0.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *file;
	char buffer[-1];
	size_t read_size;
	size_t write_size;

	if (filename == NULL)
		return (0);

	file = fopen(filename, "r");
	if (file == NULL)
		return (0);

	read_size = fread(buffer, sizeof(char), letters, file);
	buffer[read_size] = '\0';

	if (read_size != letters || ferror(file))
	{
		fclose(file);
		return (0);
	}

	write_size = fwrite(buffer, sizeof(char), read_size, stdout);
	if (write_size != read_size)
	{
		fclose(file);
		return (0);
	}

	fclose(file);
	return (read_size);
}

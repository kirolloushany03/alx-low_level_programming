#include "main.h"


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

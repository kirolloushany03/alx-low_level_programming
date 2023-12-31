#include "main.h"
/**
 * ErrorExistFd - exit for Fds.
 *Prints an error message and
 * exits the program if closing a file descriptor fails.
 * @fd: The file descriptor to close.
 *
 * This function is used to handle errors related to
 * closing file descriptors. It prints
 * an error message indicating the failure to close
 * the program with an exit code of 100.
 */
void ErrorExistFd(int fd)
{
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
	exit(100);
}
/**
 * ErrorFiles - Handles errors related to file operations.
 * @f1: File descriptor 1.
 * @f2: File descriptor 2.
 * @argv: Command-line arguments.
 *
 * This function checks for errors in file operations and prints
 * corresponding error messages to standard error.
 */
void ErrorFiles(int f1, int f2, char *argv[])
{
	if (f1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (f2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}

/**
 * main - Program entry point for a simple file copy utility.
 * @argc: The number of command-line arguments.
 * @argv: An array of strings containing the command-line arguments.
 *
 * This function checks the number of command-line arguments
 * open and copy the contents of one file to another.
 *
 * Return: 0 on success, or an exit code on failure.
 */
int main(int argc, char **argv)
{
	int fd_from, fd_to;
	char buffer[BUFFER_SIZE];
	ssize_t bytes_read, bytes_written;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}
	fd_from = open(argv[1], O_RDONLY);
	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	ErrorFiles(fd_from, fd_to, argv);
	bytes_read = BUFFER_SIZE;
	while (bytes_read == BUFFER_SIZE)
	{
		bytes_read = read(fd_from, buffer, BUFFER_SIZE);
		if (bytes_read == -1)
			ErrorFiles(bytes_read, 0, argv);
		bytes_written = write(fd_to, buffer, bytes_read);
		if (bytes_written == -1)
			ErrorFiles(0, bytes_written, argv);
	}
	if (close(fd_from) == -1)
		ErrorExistFd(fd_from);
	if (close(fd_to) == -1)
		ErrorExistFd(fd_to);
	return (0);
}

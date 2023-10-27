#include "main.h"
#include <stdio.h>

/**
 * main - Entry point of the program
 * @argc: The number of command-line arguments
 * @argv: The array containing the command-line arguments
 *
 * Return: 0 if successful, non-zero otherwise
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}

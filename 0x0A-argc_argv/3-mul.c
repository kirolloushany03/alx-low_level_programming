#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Multiplies two numbers provided as command-line arguments
 * @argc: The number of command-line arguments
 * @argv: An array of strings containing the command-line arguments
 *
 * Return: 0 if successful, 1 if incorrect number of arguments provided
 */
int main(int argc, char *argv[])
{
	if (argc !=  3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
	int num1 = atoi(argv[1]);
	int num2 = atoi(argv[2]);
	int result = num1 * num2;

	printf("%d\n", result);
	}
	return (0);
}

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "main.h"
/**
 * main - Entry point of the program
 * @argc: The number of command-line arguments
 * @argv: The array containing the command-line arguments
 *
 * Return: 0 if successful, 1 otherwise
 *
 * Description: This program adds positive numbers passed as command-line arguments.
 */
int main(int argc, char *argv[])
{
int i , j , sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return 0;
	}

	for (int i = 1; i < argc; i++)
	{
		for (int j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return 1;
			}
		}

		sum += atoi(argv[i]);
	}

	printf("%d\n", sum);

	return 0;
}

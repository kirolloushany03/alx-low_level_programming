#include "main.h"
#include <stdio.h>

/**
 * main - Entry point of the program
 * @argc: The number of command-line arguments
 * @argv: The array containing the command-line arguments
 *
 * Return: 0 if successful, non-zero otherwise
 */

int main(int argc, char *argv[])
{
int i;

for (i = 0 ; i < argc ; i++)
{
printf("%s\n", argv[i]);
}
return (0);
}

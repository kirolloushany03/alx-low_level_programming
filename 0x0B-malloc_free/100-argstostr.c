#include "mainB.h"
#include <stdlib.h>
#include <string.h>

/**
 * argstostr - concatenates all the arguments of the program
 * @ac: number of arguments
 * @av: array of arguments
 *
 * Return: pointer to the concatenated string, or NULL if it fails
 */
char *argstostr(int ac, char **av)
{
	if (ac == 0 || av == NULL)
		return (NULL);

	int total_length = 0;
	int i, j;

	for (i = 0; i < ac; i++)
		total_length += strlen(av[i]) + 1;

	char *result = (char *)malloc(total_length * sizeof(char));

	if (result == NULL)
		return (NULL);

	int index = 0;

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			result[index++] = av[i][j];
		result[index++] = '\n';
	}

	result[index] = '\0';

	return (result);
}

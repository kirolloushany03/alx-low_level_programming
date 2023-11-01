#include "mainB.h"
#include <stdlib.h>
#include <string.h>

/**
 * argstostr - concatenates all command-line arguments into a single string
 * @ac: The argument count
 * @av: The argument vector, an array of strings
 *
 * Return: A pointer to the concatenated string, or NULL on failure
 */
char *argstostr(int ac, char **av)
{
	if (ac == 0 || av == NULL)
		return (NULL);

	int total_length = 0;
	int i, j;
	char *result;
	int index = 0;

	for (i = 0; i < ac; i++)
		total_length += strlen(av[i]) + 1;

	result = (char *)malloc(total_length * sizeof(char));
	if (result == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			result[index++] = av[i][j];
		result[index++] = '\n';
	}

	result[index] = '\0';

	return (result);
}

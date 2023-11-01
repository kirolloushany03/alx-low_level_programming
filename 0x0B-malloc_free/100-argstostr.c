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
	int i, j, k, size;
	char *result;

	size = 0;
	k = 0;
	if (ac == 0 || av == NULL)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		j = 0;
		while (av[i][j])
		{
			size++;
			j++;
		}
		size++;
		i++;
	}
	result = malloc((sizeof(char) * size) + 1);
	if (result == NULL)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		j = 0;
		while (av[i][j])
		{
			result[k] = av[i][j];
			j++;
			k++;
		}
		result[k] = '\n';
		k++;
		i++;
	}
	result[k] = '\0';
	return (result);
}

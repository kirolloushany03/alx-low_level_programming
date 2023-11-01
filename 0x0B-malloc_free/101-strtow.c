#include "mainB.h"
#include <stdlib.h>
#include <string.h>

/**
 * count_words - Counts the number of words in a string.
 * @str: The input string.
 *
 * Return: The number of words in the string.
 */
int count_words(char *str)
{
	if (str == NULL || *str == '\0')
		return (0);

	int count = 0;
	int i = 0;
	int len = strlen(str);

	while (i < len)
	{
		while (i < len && str[i] == ' ')
			i++;

		if (i < len && str[i] != ' ')
		{
			count++;

			while (i < len && str[i] != ' ')
				i++;
		}
	}

	return (count);
}

/**
 * strtow - Splits a string into words.
 * @str: The input string.
 *
 * Return: A pointer to an array of strings (words), or NULL if it fails.
 */
char **strtow(char *str)
{
	if (str == NULL || *str == '\0')
		return (NULL);

	int word_count = count_words(str);
	char **words = (char **)malloc((word_count + 1) * sizeof(char *));

	if (words == NULL)
		return (NULL);

	int i = 0;
	int j = 0;
	int len = strlen(str);

	while (i < len)
	{
		while (i < len && str[i] == ' ')
			i++;

		int start = i;

		while (i < len && str[i] != ' ')
			i++;

		int word_len = i - start;

		words[j] = (char *)malloc((word_len + 1) * sizeof(char));
		if (words[j] == NULL)
		{
			for (int k = 0; k < j; k++)
				free(words[k]);
			free(words);
			return (NULL);
		}

		strncpy(words[j], str + start, word_len);
		words[j][word_len] = '\0';

		j++;
	}

	words[j] = NULL;

	return (words);
}

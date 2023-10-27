#include "main7.h"

/**
 * _strchr - Locate a character in a string.
 * @s: A pointer to the null-terminated string to be searched.
 * @c: The character to be located within the string.
 * Return:
 * - A pointer to the first occurrence of 'c' in 's', or
 * - NULL if 'c' is not found in 's'.
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	for (; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (0);
}

#include "main6.h"

/**
 * _strncat - Concatenates at most 'n' bytes from 'src' to 'dest'
 *
 * @dest: Destination string to which 'src' will be appended
 * @src: Source string to be appended to 'dest'
 * @n: Maximum number of bytes from 'src' to append
 *
 * Return: A pointer to the resulting string 'dest'.
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (j < n && src[j] != '\0')
	{
	dest[i] = src[j];
	i++;
	j++;
	}
	dest[i] = '\0';
	return (dest);
}

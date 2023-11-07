#include "main6.h"

/**
 * _strncpy - Copy a string, up to n bytes, from src to dest.
 *
 * @dest: Destination buffer to copy into.
 * @src: Source string to copy from.
 * @n: Maximum number of bytes to copy.
 *
 * Return: A pointer to the destination buffer 'dest'.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int j;

	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[j] = src[j];
		j++;
	}
	while (j < n)
	{
		dest[j] = '\0';
		j++;
	}

	return (dest);
}

#include "main7.h"
/**
 * _memcpy - Copy memory area from source to destination.
 * @dest: A pointer to the destination memory area.
 * @src: A pointer to the source memory area.
 * @n: The number of bytes to copy from source to destination.
 * Return:
 * A pointer to the destination memory area 'dest' after copying.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}

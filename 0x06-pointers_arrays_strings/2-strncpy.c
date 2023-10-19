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

char *_strncpy(char *dest, const char *src, int n)
{
char *result = dest;
while (n-- > 0 && (*dest++ = *src++))
;
return (result);
}

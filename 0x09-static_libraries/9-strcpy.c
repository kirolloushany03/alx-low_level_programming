#include "main5.h"

/**
 * _strcpy - Copies a string, including the null byte, from src to dest.
 * @dest: Pointer to the destination buffer.
 * @src: Pointer to the source string.
 *
 * Return: Pointer to the destination buffer.
 */

char *_strcpy(char *dest, char *src)
{
char *original_dest = dest;

while (*src != '\0')
{
*dest = *src;
src++;
dest++;
}

*dest = '\0';

return (original_dest);
}

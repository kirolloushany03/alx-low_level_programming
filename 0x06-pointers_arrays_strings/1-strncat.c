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

char *_strncat(char *dest, const char *src, int n)
{
char *result = dest;
while (*dest != '\0')
{
dest++;
}
while (*src != '\0' && n > 0)
{
*dest = *src;
dest++;
src++;
n--;
}
*dest = '\0';
return (result);
}

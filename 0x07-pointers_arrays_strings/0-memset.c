#include "main7.h"
/**
 * _memset - Fill memory with a constant byte.
 * @s: A pointer to the memory area to be filled.
 * @b: The constant byte to fill the memory with.
 * @n: The number of bytes to fill with the constant byte.
 *
 * Description: This function takes a pointer 's' to a memory area
 * and fills
 * the first 'n' bytes with the constant byte 'b'.
 *
 * Return: A pointer to the memory area 's' after filling it with 'b'.
 */
char *_memset(char *s, char b, unsigned int n)
{
for (unsigned int i = 0; i < n; i++)
{
s[i] = b;
}
return s;
}

#include <stdlib.h>
#include "mainc.h"

/**
* _memset - Fills the first n bytes of the memory area pointed to by s
* with the constant byte b.
* @s: A pointer to the memory area to be filled.
* @b: The character to fill the memory area with.
* @n: The number of bytes to be filled.
*
* Return: A pointer to the filled memory area s.
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}



/**
* _calloc - Allocates memory for an array and initializes it to zero
* @nmemb: The number of elements to allocate
* @size: The size of each element
*
* Return: A pointer to the allocated memory. If nmemb or size is 0, or if
* malloc fails, the function returns NULL.
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(size * nmemb);

	if (ptr == NULL)
		return (NULL);

	_memset(ptr, 0, nmemb * size);

	return (ptr);
}

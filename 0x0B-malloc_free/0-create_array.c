#include <stdlib.h>
#include "mainB.h"

/**
 * create_array - Creates an array of chars, and
 * initializes it with a specific char.
 * @size: Size of the array to be created.
 * @c: Character to initialize the array with.
 *
 * Return: Pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i;

	if (size == 0)
		return (NULL);

	p = malloc(sizeof(c) * size);

	if (p == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		p[i] = c;

	return (p);
}

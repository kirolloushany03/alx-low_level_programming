#include "main5.h"

/**
 * _strlen - Calculate the length of a string.
 *
 * @s: The string to measure.
 *
 * Description:
 * This function takes a pointer to a string and calculates its length by
 * iterating through the characters until the null terminator is encountered.
 *
 * Return: The length of the string.
 */


int _strlen(char *s)
{

	char *p = s;

	while (*p != '\0')
		p++;

return (p - s);
}

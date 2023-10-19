#include "main6.h"

/**
 * leet - Encodes a string into "1337".
 * @n: The string to be encoded.
 *
 * This function takes a string 'n' as its parameter
 * and encodes it into "1337" by
 * replacing specific characters with their "1337" equivalents.
 * Return: A pointer to the modified input string ('n').
 */

char *leet(char *n)
{
	int i, j;
	char s1[] = "aAeEoOtTlL";
	char s2[] = "4433007711";

	for (i = 0; n[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (n[i] == s1[j])
			{
				n[i] = s2[j];
			}
		}
	}
	return (n);
}

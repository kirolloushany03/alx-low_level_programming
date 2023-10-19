#include "main6.h"

/**
 * string_toupper - Convert all lowercase letters in a string to uppercase.
 * @n: The string to be modified.
 *
 * This function takes a pointer to a string 'n' as its parameter and modifies
 * the string in place, converting all lowercase letters to their uppercase
 * equivalents. It does so by iterating through each character in the string,
 * checking if it's a lowercase letter (in the ASCII range 'a' to 'z'), and
 * if it is, it converts it to uppercase by subtracting 32 from
 * its ASCII value.
 */

char *string_toupper(char *n)
{
	int i;

	i = 0;
	while (n[i] != '\0')
	{
		if (n[i] >= 'a' && n[i] <= 'z')
			n[i] = n[i] - 32;
		i++;
	}
	return (n);
}

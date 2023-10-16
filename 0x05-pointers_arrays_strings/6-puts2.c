#include <stdio.h>
#include "main5.h"

/**
 * puts2 - Print every other character of a string,
 * starting with the first character, followed by a new line.
 *
 * @str: The string to be processed.
 *
 * Description:
 * This function takes a pointer to a string and
 * prints every other character from
 * the string, starting with the first character.
 *  It adds a new line at the end.
 * If the string is NULL, no action is taken.
 */

void puts2(char *str)
{
	int len, i;

	len = 0;

	while (str[len] != '\0')
	{
		len++;
	}

	for (i = 0; i < len; i += 2)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}

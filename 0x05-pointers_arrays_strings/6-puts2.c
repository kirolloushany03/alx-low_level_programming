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
if (str != NULL)
{
int i = 0;
while (str[i] != '\0')
{
putchar(str[i]);
i += 2;
}

putchar('\n');
}
}

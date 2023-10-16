#include <stdio.h>
#include "main5.h"
/**
 * print_rev - Print a string in reverse, followed by a new line.
 *
 * @s: The string to be printed in reverse.
 *
 * Description:
 * This function takes a pointer to a string and prints the characters of the
 * string in reverse order, followed by a new line. If the string is NULL,
 * no output is generated.
 */

void print_rev(char *s)
{
if (s != NULL)
{
int length = 0;
int i;
while (s[length] != '\0')
{
length++;
}

for (i = length - 1; i >= 0; i--)
{
putchar(s[i]);
}

putchar('\n');
}
}

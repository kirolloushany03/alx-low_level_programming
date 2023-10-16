#include "main5.h"
#include <stdio.h>

/**
 * _puts - Print a string followed by a new line to stdout.
 *
 * @str: The string to be printed.
 *
 * Description:
 * This function takes a pointer to a string and
 *prints it to the standard output
 * (stdout) followed by a new line. If
 *the string is NULL, no output is generated.
 */


void _puts(char *str)
{
if (str != NULL)
{
puts(str);
}
}

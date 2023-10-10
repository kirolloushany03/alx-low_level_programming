#include <stdio.h>
#include "main.h"

/**
 * _putchar - Prints a string to stdout.
 * @str: The string to print.
 *
 * Return: The number of characters printed.
 */
int _putchar(const char *str)
{
return (printf("%s", str));
}

/**
* main - Entry point of the program.
*
* Return: Always 0 (Success).
*/
int main(void)
{
_putchar("_putchar\n");
return (0);
}

#include "main.h"

/**
 * print_line - a function that draws a straight line in the terminal
 * @n: the number of times to print '_'
 * Return: void
 */

void print_line(int n)

{
if (n > 0)
{

for (; n > 0 ; n--)
{
_putchar('_');
}

}
_putchar('\n');
}

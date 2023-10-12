#include "main.h"
#include <stdio.h>
/**
 * print_triangle - prints a triangle of a
 * specified size using '#' characters
 * @size: The size of the triangle to print
 *
 * Description:
 * This function prints a right-angled triangle with
 * the specified size using the character '#'.
 * If 'size' is 0 or less, it prints only a newline character.
 * The function creates a triangular pattern with spaces on the
 * left side and '#' on the right side.
 */
void print_triangle(int size)
{
if (size <= 0)
{
_putchar('\n');
return;
}
int row, col;
for (row = 1; row <= size; row++)
{
for (col = 1; col <= size; col++)
{
if (col <= size - row)
{
_putchar(' ');
}
else
{
_putchar('#');
}
}
_putchar('\n');
}
}

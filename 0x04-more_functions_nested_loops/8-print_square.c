#include "main.h"
/**
 * print_square - prints a square of a specified
 * size using the '#' character
 * @size: The size of the square to print
 *
 * Description:
 * This function prints a square of size 'size'
 * in the terminal using the character '#'.
 * If 'size' is 0 or less, it prints only a newline character.
 */
void print_square(int size)
{
if (size <= 0)
{
_putchar('\n');
return;
}

int row = 1;
while (row <= size)
{
int col = 1;
while (col <= size)
{
_putchar('#');
col++;
}
_putchar('\n');
row++;
}
}

#include "main.h"

/**
 * print_diagonal - prints a diagonal line of backslashes
 * @n: The number of backslashes in the diagonal
 *
 * Description:
 * This function prints a diagonal line composed of backslashes
 * (\) in the terminal.
 * The number of backslashes on each line increases from 0 to n.
 * If n is 0 or less, it simply prints a newline character,
 * resulting in no diagonal pattern.
 */
void print_diagonal(int n)
{
if (n > 0)
{
int spaces = 0;
while (spaces < n)
{
int i;
for (i = 0; i < spaces; i++)
{
_putchar(' ');
}
_putchar('\\');
_putchar('\n');
spaces++;
}
}
else
{
_putchar('\n');
}
}

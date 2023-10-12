#include "main.h"

/**
 * print_square - prints squares
 * @size: parameter
 * Return: returns nothing
 */
void print_square(int size)
{
int row = 0;
int inc2;

if (size > 0)
{
while (row < size)
{
inc2 = 0;
while (inc2 < size)
{
_putchar('#');
inc2++;
}
_putchar('\n');
row++;
}
}
else
{
_putchar('\n');
}
}

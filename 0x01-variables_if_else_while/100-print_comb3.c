#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: This program prints all possible combinations of two-digit
 * numbers, from 00 to 99, separated by a comma and space. The numbers are
 * printed in ascending order.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int k, m;

for (k = 0; k < 10; k++)
{
for (m = 0; m < 10; m++)
{
putchar(k + '0');
putchar(m + '0');

if (k < 9 || m < 9)
{
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}

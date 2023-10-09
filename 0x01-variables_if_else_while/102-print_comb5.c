#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: This program prints all possible combinations of two two-digit
 * numbers in ascending order, separated by a space and followed by a comma
 * and space. The numbers are printed with two digits.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i, j, first_digit1, second_digit1, first_digit2, second_digit2;

for (i = 0; i < 100; i++)
{
for (j = i; j < 100; j++)
{
first_digit1 = i / 10;
second_digit1 = i % 10;
first_digit2 = j / 10;
second_digit2 = j % 10;

putchar(first_digit1 + '0');
putchar(second_digit1 + '0');
putchar(' ');
putchar(first_digit2 + '0');
putchar(second_digit2 + '0');

if (i != 99 || j != 99)
{
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}

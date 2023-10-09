#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: This program prints all possible different combinations of
 * three digits in ascending order. Each combination consists of three
 * different digits separated by a comma and space.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
for (int i = 0; i < 10; i++)
{
for (int j = i + 1; j < 10; j++)
{
for (int k = j + 1; k < 10; k++)
{
putchar(i + '0'); /* Print the first digit */
putchar(j + '0'); /* Print the second digit */
putchar(k + '0'); /* Print the third digit */

if (i != 7 || j != 8 || k != 9)
{
putchar(','); /* Print comma */
putchar(' '); /* Print space */
}
}
}
}
putchar('\n');
return (0);
}

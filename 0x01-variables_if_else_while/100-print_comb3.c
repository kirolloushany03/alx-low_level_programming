#include <stdio.h>

/**
* main - Entry point of the program
*
* Description: This program prints all possible combinations of two-digit
* numbers, from 01 to 99, separated by a comma and space. The numbers are
* printed in ascending order.
*
* Return: Always 0 (Success)
*/
int main(void)
{
int k, m;

for (k = 0; k < 10; k++)
{
for (m = (k + 1); m < 10; m++)
{
putchar(k + '0');
putchar(m + '0');

if (k < 8 || m < 9)
{
putchar(',');
putchar(' ');
}
}
}

return (0);
}

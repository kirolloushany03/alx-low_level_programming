#include <stdio.h>
/**
* main - Entry point of the program
*
* Description: This program prints all possible combinations of single-digit
* numbers separated by a comma and space. The numbers are printed in ascending
* order from 0 to 9.
*
* Return: Always 0 (Success)
*/
int main(void)
{
int i;

for (i = 0; i < 10; i++)
{
putchar(i + '0');
if (i < 9)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}

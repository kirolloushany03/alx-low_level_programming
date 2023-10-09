#include <stdio.h>

int main()
{
for (int i = 0; i < 100; i++)
{
for (int j = i; j < 100; j++)
{
int first_digit1 = i / 10;
int second_digit1 = i % 10;
int first_digit2 = j / 10;
int second_digit2 = j % 10;

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
return 0;
}

#include <stdio.h>
/**
*main - Entry point of entry
*
*description: this program print s base 10
*
*
*Return: Always 0 (success)
**/
int main(void)
{
int n;

for (n = 0; n <= 9; n++)
{
putchar(n + '0');
}

putchar('\n');
return (0);
}

#include <stdio.h>
#include "main.h"
/**
 * main - Entry point
 *
 * Description:
 * Computes and prints the sum of all multiples of 3 or
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int sum = 0;
int i;

for (i = 3; i < 1024; i++)
{
if (i % 3 == 0 || i % 5 == 0)
{
sum += i;
}
}

printf("%d\n", sum);

return (0);
}

#include <stdio.h>

/**
 * main - Entry point
 * Description: Prints the first 50 Fibonacci numbers separated by a comma and space.
 * Return: Always 0 (Success)
 */
int main(void)
{
long int first = 1;
long int second = 2;
long int next;
int count;

printf("%ld, %ld", first, second);

for (count = 2; count < 50; count++)
{
next = first + second;
printf(", %ld", next);
first = second;
second = next;
}

printf("\n");

return (0);
}

#include "main.h"

/**
 * print_last_digit - Print and return the last digit of a number
 * @n: The number to extract the last digit from
 *
 * Return: The value of the last digit
 */
int print_last_digit(int n)
{
if (n < 0)
n = -n;

int last_digit = n % 10;

_putchar('0' + last_digit);

return (last_digit);
}

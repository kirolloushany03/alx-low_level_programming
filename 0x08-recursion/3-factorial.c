#include "main8.h"
#include <stdio.h>
/**
 * factorial - Returns the factorial of a given number.
 * @n: The number to calculate the factorial of.
 *
 * Return: The factorial of the given number, or -1 if the number is negative.
 *         The factorial of 0 is defined as 1.
 */

int factorial(int n)
{
if (n < 0)
{
return (-1);
}

if (n == 0)
{
return (1);
}

return (n * factorial(n - 1));
}

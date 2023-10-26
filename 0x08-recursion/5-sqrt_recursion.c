#include "main8.h"
#include <stdio.h>

int _sqrt_recursion(int n);
int sqrt_helper(int n, int i);

/**
 * _sqrt_recursion - Returns the natural square
 * root of a number using recursion.
 * @n: The number to find the square root of.
 *
 * Return: The natural square root of the given number.
 *         If n is negative, returns -1 to indicate an error.
 *         If n does not have a natural square root, returns -1.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	if (n == 0 || n == 1)
		return (n);

	return (sqrt_helper(n, 0));
}

/**
 * sqrt_helper - Helper function to perform binary search for square root.
 * @n: The number to find the square root of.
 *@i: is theit
 * Return: The square root of the given number.
 *         If no natural square root is found, returns -1.
 */
int sqrt_helper(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (actual_sqrt_recursion(n, i + 1));
}

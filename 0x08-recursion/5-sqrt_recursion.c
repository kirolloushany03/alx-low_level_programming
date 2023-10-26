#include "main8.h"
#include <stdio.h>


int _sqrt_recursion(int n);
int sqrt_helper(int n, int start, int end);

/**
 * _sqrt_recursion - Returns the natural square root
 * of a number using recursion.
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

	return (sqrt_helper(n, 1, n / 2));
}

/**
 * sqrt_helper - Helper function to perform binary search for square root.
 * @n: The number to find the square root of.
 * @start: The starting number for the search.
 * @end: The ending number for the search.
 *
 * Return: The square root of the given number.
 *         If no natural square root is found, returns -1.
 */
int sqrt_helper(int n, int start, int end)
{
	if (start > end)
		return (-1);

	int mid = (start + end) / 2;

	if (mid * mid == n)
		return (mid);

	if (mid * mid > n)
		return (sqrt_helper(n, start, mid - 1));

	return (sqrt_helper(n, mid + 1, end));
}

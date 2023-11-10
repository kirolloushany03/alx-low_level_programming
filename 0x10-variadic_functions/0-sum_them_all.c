#include "variadic_functions.h"

/**
 * sum_them_all - Calculate the sum of an unlimited variable
 * number of arguments
 * @n: The number of arguments to sum
 * @...: The variable arguments to be summed
 *
 * Description: This function takes an unsigned integer 'n' and a variable
 * number of integer arguments
 *
 * Return: The sum of 'n' integers, or 0 if 'n' is 0.
 */
int sum_them_all(const unsigned int n, ...)
{
	if (n == 0)
	{
		return (0);
	}

	int sum = 0;
	unsigned int i;
	va_list args;

	va_start(args, n);

	for (unsigned int i = 0; i < n; i++)
	{
		int value = va_arg(args, int);

		sum += value;
	}

	va_end(args);

	return (sum);
}


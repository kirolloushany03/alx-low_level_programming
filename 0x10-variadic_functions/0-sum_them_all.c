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
	unsigned int i;
	int sum = 0;
	va_list list;

	va_start(list, n);

	for (i = 0; i < n; i++)
		sum += va_arg(list, int);

	va_end(list);

	return (sum);
}

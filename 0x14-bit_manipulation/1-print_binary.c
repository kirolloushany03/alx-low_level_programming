#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: the number to print
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int mask = 1UL << (sizeof(unsigned long int) * 8 - 1);

	if (n == 0)
	{
		printf("0");
		return;
	}

	while (mask)
	{
		if (n & mask)
			printf("1");
		else
			printf("0");

		mask >>= 1;
	}
}

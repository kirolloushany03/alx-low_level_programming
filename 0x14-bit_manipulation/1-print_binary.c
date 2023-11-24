#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: the number to print
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	int i = 0, binary[128], j;

	if (n == 0)
	{
		putchar('0');
		return;
	}
	while (n > 0)
	{
		binary[i] = n & 1;
		n = n >> 1;
		i++;
	}

	for (j = i - 1; j >= 0; j--)
	{
		putchar(binary[j] + '0');
	}
}

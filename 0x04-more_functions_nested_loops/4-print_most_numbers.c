#include "main.h"
#include <unistd.h>

/**
 * print_most_numbers - Prints numbers from 0 to 9, excluding 2 and 4.
 *
 * This function prints the numbers from '0' to '9', one at a time, with the
 * exception of '2' and '4'. It uses the custom _putchar function to display
 * the characters on the standard output (usually the terminal).
 */

void print_most_numbers(void)
{
char d;
for (d = '0'; d <= '9'; d++)
	{
	if (d != '2' && d != '4')
	{
	_putchar(d);
	}
	_putchar(\n);
	}

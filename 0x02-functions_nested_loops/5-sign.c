#include <stdio.h>
#include "main.h"

/**
 * print_sign - Print the sign of a number
 * @n: The number to check
 *
 * Description:
 * This function prints the sign of the number 'n'.
 * If 'n' is positive, it prints '+', returns 1.
 * If 'n' is zero, it prints '0', returns 0.
 * If 'n' is negative, it prints '-', returns -1.
 *
 * Return: 1, 0, or -1 depending on the sign of 'n'.
 */
int print_sign(int n) {
	if (n > 0) {
		_putchar(43); /* ASCII code for '+' */
		return 1;
	} else if (n == 0) {
		_putchar(48); /* ASCII code for '0' */
		return 0;
	} else {
		_putchar(45); /* ASCII code for '-' */
		return -1;
	}
}

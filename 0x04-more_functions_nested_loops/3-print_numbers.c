#include <stdio.h>
#include "main.h"

/**
 * print_numbers - Prints the numbers from 0 to 9, followed by a newline.
 *
 * Description: This function prints the numbers from 0 to 9,
 * separated by spaces,
 * and then adds a newline character.
 */

void print_numbers(void)
{
int i;
for (i = 0; i <= 9; i++)
{
	printf("%d", i);
}
printf("\n");
}


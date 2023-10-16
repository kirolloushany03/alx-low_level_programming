#include <stdio.h>
#include "main5.h"

/**
 * puts_half - Print the second half of a string,
 * followed by a new line.
 *
 * @str: The string to be processed.
 *
 * Description:
 * This function takes a pointer to a string and
 *  prints the second half of the string.
 * If the number of characters in the string is even,
 *  it starts from the middle character;
 * if it's odd, it starts from the character following the middle.
 * The printed characters are followed by a new line.
 * If the string is NULL, no action is taken.
 */

void puts_half(char *str)
{
	int a, b = 0;

	while (*(str + b))
		b++;
	a = b / 2;
	if (i % 2)
		a += 1;
	while (a < i)
	{
		_putchar(*(str + a));
		a++;
	}
	_putchar('\n');
}

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
if (str != NULL){
int length = 0;
int start_index = 0;
int i;

while (str[length] != '\0') 
{
length++;
}

if (length % 2 == 0) 
{
start_index = length / 2;
} else {
start_index = (length - 1) / 2;
}

for (i = start_index; str[i] != '\0'; i++) 
{
putchar(str[i]);
}

putchar('\n');
}
}

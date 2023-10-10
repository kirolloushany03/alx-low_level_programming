#include "main.h"
/**
*print_alphabet - Prints the lowercase alphabet followed by a newline
*description: This function prints the lowercase alphabet, from 'a' to 'z'
*adds a newline character '\n' to the output.
*
*/
void print_alphabet(void)
{
char l = 'a';
while (l <= 'z')
{
_putchar(l);
l++;
}
_putchar('\n');
}

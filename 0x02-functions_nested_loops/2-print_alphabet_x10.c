#include "main.h"

/**
 * print_alphabet_x10 - Prints the lowercase alphabet ten times followed by a new line
 */
void print_alphabet_x10(void)
{
    for (int i = 0; i < 10; i++)
    {
        print_alphabet();
    }
}

/**
 * print_alphabet - Prints the lowercase alphabet followed by a newline
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

#include <unistd.h>

/**
 * main - Entry point of the program
 *
 * Description: This program prints the message
 * "and that piece of art is useful" - Dora Korpa
 *
 * Return: Always 1 (Error)
 */
int main(void)
{
    char *message = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
    write(2, message, 59);  /* 59 is the length of the message */

    return (1);
}

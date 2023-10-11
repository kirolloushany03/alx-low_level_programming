#include <stdio.h>

/**
 * main - Entry point
 *
 * Description:
 * Calculates and prints the first 98 Fibonacci numbers.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    unsigned long int a = 1;
    unsigned long int b = 2;
    unsigned long int c = 0;
    int count;

    printf("%lu, %lu", a, b);

    for (count = 2; count < 98; count++)
    {
        c = a + b;
        if (count != 97)
            printf(", %lu", c);
        else
            printf(", %lu\n", c);

        a = b;
        b = c;
    }

    return (0);
}

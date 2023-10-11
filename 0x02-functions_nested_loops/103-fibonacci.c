#include <stdio.h>

/**
 * main - Entry point
 *
 * Description:
 * Finds and prints the sum of even-valued Fibonacci terms below 4,000,000.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    long int first = 1;
    long int second = 2;
    long int next;
    long int sum = 2; // Initialize with the second even Fibonacci number
    int count;

    while (1)
    {
        next = first + second;
        if (next >= 4000000)
            break;
        if (next % 2 == 0)
            sum += next;
        first = second;
        second = next;
    }

    printf("The sum of even-valued Fibonacci terms below 4,000,000 is: %ld\n", sum);

    return (0);
}

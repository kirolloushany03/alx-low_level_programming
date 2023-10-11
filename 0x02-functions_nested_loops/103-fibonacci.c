#include <stdio.h>

int main() {
    long int first = 1;
    long int second = 2;
    long int next;
    long int sum = 0;

    while (second <= 4000000) {
        if (second % 2 == 0) {
            sum += second;
        }

        next = first + second;
        first = second;
        second = next;
    }

    printf("The sum of even-valued Fibonacci terms below 4,000,000 is: %ld\n", sum);

    return 0;
}

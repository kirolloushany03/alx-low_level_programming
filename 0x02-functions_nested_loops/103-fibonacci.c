#include <stdio.h>
#include "main.h"
int main() {
  long int sum = 2;
  long int first = 0;
  long int second = 2;

  while (second <= 4000000) {
    if (second % 2 == 0) {
      sum += second;
    }

    second = first + second;
    first = second;
  }

  printf("The sum of even-valued Fibonacci terms below 4,000,000 is: %ld\n", sum);

  return 0;
}

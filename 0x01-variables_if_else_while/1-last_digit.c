#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
*main -Entry point
*
*Description: this will git new number in each time get excuted
*and it will make us know the last digit and the last digit is 0
*or greater thatn 5 or is leass thatn 6 and not 0
*
*Return: Always 0 (success)
*/
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;

printf("Last digit of %d is %d", n, n % 10);
if (n % 10 > 5)
{
printf(" and is greater than 5\n");
}
else if (n % 10 == 0)
{
printf(" and is 0\n");
}
else
{
printf(" and is less than 6 and not 0\n");
}

return (0);
}

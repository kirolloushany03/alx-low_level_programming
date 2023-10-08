#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/**
*main - Entry point
*
*description : this program will print an random number each time 
*the program will excute and will tell you the number
*is positive or negative
*Return: Always 0 (success)
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
    {
            printf("%d is positive\n", n);
	}
	else if (n == 0)
    {
            printf("%d is zero\n", n);
	}
else
{
    printf("%d is negative\n", n);
}

	return (0);
}

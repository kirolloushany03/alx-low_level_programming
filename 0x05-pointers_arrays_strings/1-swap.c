#include "main5.h"

/**
*swap_int - will swap the values of two intgers.
*
*This function takes two pointers to integers, and it swaps the values of
*the integers pointed to by 'a' and 'b.
*
*@a: pointer of the first intger
*@b: pointer of the second intger
*
*/
void swap_int(int *a, int *b)
{

int temp = *a;
*a = *b;
*b = temp;
}

#include <stdio.h>
#include "main5.h"

/**
 * print_array - Print n elements of an integer array,
 * separated by comma and space.
 *
 * @a: The pointer to the integer array.
 * @n: The number of elements to print.
 *
 * Description:
 * This function prints the first 'n' elements of the integer array 'a'.
 * The elements are separated by a comma and a space.
 * The printed list is followed by a new line.
 * If 'a' is NULL or 'n' is less than or equal to 0, no action is taken.
 */

void print_array(int *a, int n)
{
if (a != NULL && n > 0)
{
int i;
for (i = 0; i < n; i++)
{
if (i > 0)
{
printf(", ");
}
printf("%d", a[i]);
}

printf("\n");
}
}

#include "main6.h"

/**
 * reverse_array - Reverses the content of an array of integers.
 * @a: Pointer to the array of integers.
 * @n: Number of elements in the array.
 *
 * This function takes an array of integers and its length 'n' as parameters.
 * It reverses the order of elements in the array in-place.
 * The function uses a
 * loop to iterate through the array and swaps elements
 * from the beginning and
 * end of the array, working towards the center of
 * the array until the entire
 * array is rever
 */

void reverse_array(int *a, int n)
{
	int i;
	int t;

	for (i = 0; i < n--; i++)
	{
		t = a[i];
		a[i] = a[n];
		a[n] = t;
	}
}

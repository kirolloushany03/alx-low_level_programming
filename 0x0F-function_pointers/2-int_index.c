#include "function_pointers.h"
/**
 * int_index - Searches for an integer in an array.
 *
 * @array: The array to search in.
 * @size: The number of elements in the array.
 * @cmp: A function pointer that takes an int parameter and returns an int.
 *
 * Description:
 *This function searches for an integer in the array by calling the
 *provided comparison function on each element
 * Return: the index of first element.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}

	return (-1);
}

#include <stdlib.h>
#include "function_pointers.h"
/**
 * array_iterator - Executes a function on each element of an array.
 *
 * @array: The array to iterate over.
 * @size: The size of the array.
 * @action: A function pointer that takes an int parameter.
 *
 * Description:
 *This function iterates over each element of the array and calls the
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (!array || !action)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}

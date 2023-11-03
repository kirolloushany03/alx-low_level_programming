#include "mainc.h"
#include <stdlib.h>

/**
* array_range - Creates an array of integers from min to max
* @min: The first integer in the array
* @max: The last integer in the array
*
* Return: A pointer to the newly created array.
* If min > max or if malloc fails,
* the function returns NULL.
*/
int *array_range(int min, int max)
{
	int *array;
	int i;

	if (min > max)
		return (NULL);

	array = malloc(sizeof(int) * ((max - min) + 1));
	if (array == NULL)
		return (NULL);

	for (i = 0; min <= max; i++, min++)
		array[i] = min;

	return (array);
}

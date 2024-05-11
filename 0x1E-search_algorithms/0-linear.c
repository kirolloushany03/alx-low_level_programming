#include "search_algos.h"


/**
 * linear_search - a function that performs
 * a linear search for a value in an array of integers
 * @array: a pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 *
 * Description: This function iterates over each element in
 * the array from the beginning to the end,
 * comparing each element with the value to search for.
 * It prints the value of each checked element.
 * If the value is found, it returns the index of the element.
 * If the value is not found after checking all elements,
 * it returns -1.
 *
 * Return: the first index where value is located,
 * or -1 if value is not present or if array is NULL
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	while (i < size)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
		i++;
	}
	return (-1);
}

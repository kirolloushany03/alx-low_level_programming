#include "search_algos.h"
/**
 * jump_search - Searches for a value in a sorted
 * array of integers using the Jump Search algorithm.
 * @array: Pointer to the first element of the array to search in.
 * @size: Number of elements in the array.
 * @value: Value to search for.
 *
 * Return: The first index where value is located,
 * or -1 if value is not present in array or if array is NULL.
 */
int jump_search(int *array, size_t size, int value)
{
	size_t jump = sqrt(size), i = 0, prev = 0;

	if (!array)
		return (-1);
	while (i < size && array[i] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		prev = i, i += jump;
	}
	printf("Value found between indexes [%lu] and [%lu]\n", prev, i);
	i = i < size ? i : size - 1;
	while (prev <= i)
	{
		printf("Value checked array[%lu] = [%d]\n", prev, array[prev]);
		if (array[prev] == value)
			return (prev);
		prev++;
	}
	return (-1);
}

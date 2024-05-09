#include "search_algos.h"
/**
 * jump_search - Searches for a value in a sorted
 * array of integers using the Jump Search algorithm.
 * @array: Pointer to the first element of the array to search in.
 * @size: Number of elements in the array.
 * @value: Value to search for.
 *
 * Return: The first index where value is located,
 * or -1 if value is not present in array or if array is NULL
 */
int jump_search(int *array, size_t size, int value)
{
	size_t jump = sqrt(size), i = 0, prev = 0;

	/* Check if the array is NULL */
	if (!array)
		return (-1);

	/* First pass: Jump Search */
	while (i < size && array[i] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		prev = i;
		i += jump;
	}

	/* Second pass: Linear Search */
	i = i < size ? i : size - 1;
	while (prev <= i)
	{
		printf("Value checked array[%lu] = [%d]\n", prev, array[prev]);
		if (array[prev] == value)
			return (prev);
		prev++;
	}

	/* If the value is not found, return -1 */
	return (-1);
}

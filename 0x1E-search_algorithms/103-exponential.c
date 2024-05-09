#include "search_algos.h"

/**
 * printArray - Prints the elements of an array.
 * @arr: Pointer to the first element of the array.
 * @size: Size of the array.
 *
 * Return: void
 */
void printArray(int *arr, int size)
{
	int i;

	printf("Searching in array: ");
	for (i = 0; i < size; i++)
	{
		if (i < size - 1)
			printf("%d, ", arr[i]);
		else
			printf("%d", arr[i]);
	}
	printf("\n");
}

/**
 * binary_search - Searches for a value in an array.
 * @array: Pointer to the first element of the array.
 * @size: Size of the array.
 * @value: Value to search for.
 *
 * Return: Index of the value if found, -1 otherwise.
 */
int binary_search(int *array, size_t size, int value)
{
	int low = 0, high = size - 1, mid;

	if (array == NULL)
		return (-1);

	printArray(array, size);

	while (low <= high)
	{
		mid = (low + high) / 2;
		if (value == array[mid])
			return (mid);

		if (value > array[mid])
			low = mid + 1;
		else
			high = mid - 1;

		if (high - low + 1 > 0)
			printArray(array + low, high - low + 1);
	}
	return (-1);
}

/**
 * exponential_search - Searches for a value in
 * an array using exponential search.
 * @array: Pointer to the first element of the array.
 * @size: Size of the array.
 * @value: Value to search for.
 *
 * Return: Index of the value if found, -1 otherwise.
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t i = 1, j = 0;
	int value_index;

	if (!array)
		return (-1);
	else if (array[0] == value)
		return (0);

	while (i < size - 1 && array[i] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		j = i, i = i * 2 < size ? i * 2 : size - 1;
	}
	printf("Value found between indexes [%lu] and [%lu]\n", j, i);
	value_index = binary_search(array + j, i - j + 1, value);
	return (value_index == -1 ? value_index : value_index + (int)j);
}

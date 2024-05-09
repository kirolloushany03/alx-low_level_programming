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
		{ /* Check if the current element is not the last one */
			printf("%d, ", arr[i]);
		}
		else
		{
			/* Print the last element without a comma */
			printf("%d", arr[i]);
		}
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
	int low, high, mid;

	low = 0;
	high = size - 1;

	if (array == NULL)
	{
		return (-1);
	}

	printArray(array, size);

	while (low <= high)
	{
		mid = (low + high) / 2;	 /* Here we got the average */
		if (value == array[mid]) /* Here I was putting it mid only without array */
		{
			return (mid);
		}

		if (value > array[mid])
		{
			low = mid + 1;
		}
		else
		{
			high = mid - 1;
		}

		/* First try I was putting this one without */
		if (high - low + 1 > 0)
		{
			printArray(array + low, high - low + 1);
		}
	}
	return (-1);
}

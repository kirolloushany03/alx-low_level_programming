#include "search_algos.h"

void printArray(int *arr, int size)
{
	printf("Searching in array: ");
	for (int i = 0; i < size; i++)
	{
		if (i < size - 1)
		{ /*Check if the current element is not the last one*/
			printf("%d, ", arr[i]);
		}
		else
		{
			/*Print the last element without a comma*/
			printf("%d", arr[i]);
		}
	}
	printf("\n");
}

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
		mid = (low + high) / 2;	 /*here we got the average*/
		if (value == array[mid]) /*here i was putting it mid only without array*/
		{
			return mid;
		}

		if (value > array[mid])
		{
			low = mid + 1;
		}
		else
		{
			high = mid - 1;
		}
		/*first try i was putting this one without */
		if (high - low + 1 > 0)
		{
			printArray(array + low, high - low + 1);
		}
	}
	return (-1);
}

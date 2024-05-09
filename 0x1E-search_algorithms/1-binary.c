#include "search_algos.h"

void printArray(int *arr, int size)
{
	int i;
	printf("Searching in array: ");
	for (i = 0; i < size; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}

int binary_search(int *array, size_t size, int value)
{
	int low, high, mid;
	low = array[0];
	high = array[size - 1];
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

		printArray(array + low, high - low + 1);
	}
	return (-1);
}

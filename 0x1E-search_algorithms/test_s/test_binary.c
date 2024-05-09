#include <stdio.h>
int binary_search(int *array, size_t size, int value);

void printArray(int *arr, int size)
{
    printf("Searching in array: ");
    for (int i = 0; i < size; i++)
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
        mid = (low + high) / 2;  // here we got the average
        if (value == array[mid]) // here i was putting it mid only without array
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

int main()
{
    int array[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};   // Sorted array
    size_t size = sizeof(array) / sizeof(array[0]); // Calculate the size of the array
    int value = 2;                                  // Value to search for

    int result = binary_search(array, size, value);

    return 0;
}
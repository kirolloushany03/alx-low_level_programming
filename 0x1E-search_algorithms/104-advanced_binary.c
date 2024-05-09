#include "search_algos.h"
#include <stdlib.h>
int advanced_binary_rec(int *array, size_t min, size_t max, int value);

/**
 * advanced_binary - Searches for a value in a sorted array of integers.
 * @array: Pointer to the first element of the array to search in.
 * @size: Number of elements in the array.
 * @value: Value to search for.
 *
 * Return: Index where value is located, or -1 if value is not present in array.
 */
int advanced_binary(int *array, size_t size, int value)
{
    if (!array)
        return (-1);
    return (advanced_binary_rec(array, 0, size - 1, value));
}

/**
 * advanced_binary_rec - Recursive binary search function.
 * @array: Pointer to the first element of the array to search in.
 * @min: Minimum index of the current subarray.
 * @max: Maximum index of the current subarray.
 * @value: Value to search for.
 *
 * Return: Index where value is located, or -1 if value is not present in array.
 */
int advanced_binary_rec(int *array, size_t min, size_t max, int value)
{
    size_t i = min;
    size_t mid = min + (max - min) / 2;
    int currentValue = array[mid];

    if (min > max)
        return (-1);

    printf("Searching in array: ");
    while (i < max)
        printf("%d, ", array[i++]);
    printf("%d\n", array[i]);

    if (currentValue == value && (mid == min || array[mid - 1] != value))
        return (mid);
    else if (currentValue >= value)
        return (advanced_binary_rec(array, min, mid, value));
    else
        return (advanced_binary_rec(array, mid + 1, max, value));
}

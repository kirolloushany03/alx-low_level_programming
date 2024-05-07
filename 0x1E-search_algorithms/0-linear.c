#include "search_algos.h"

int linear_search(int *array, size_t size, int value)
{
    if (size == 0 || array == NULL)
    {
        return (-1);
    }
    for (size_t i = 0; i < size; i++)
    {
        // will wirt here printf
        if (array[i] == value)
        {
            printf("Value checked array[%zu] = [%d]\n", i, array[i]);
            return i;
        }
        else
        {
            printf("Value checked array[%zu] = [%d]\n", i, array[i]);
        }
    }
    return -1;
}
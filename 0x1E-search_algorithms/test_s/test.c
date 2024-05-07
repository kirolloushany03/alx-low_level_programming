#include <stdio.h>
int searchlinear(int *array, int value, int length);

int searchlinear(int *array, int value, int length)
{
    for (int i = 0; i < length; i++)
    {
        if (array[i] == value)
        {
            return (i);
        }
    }
    return (-1);
}

int main()
{
    //             0  1   2  3  4  5  6  7  8  9
    int array[] = {4, 9, 10, 1, 7, 8, 6, 3, 5, 2};
    int length = sizeof(array) / sizeof(array[0]);

    int index = searchlinear(array, 30, length);

    if (index != -1)
    {
        printf("elemented founded: %d\n", index);
    }
    else
    {
        printf("elemnt not founded");
    }
    return (0);
}
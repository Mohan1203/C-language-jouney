#include <stdio.h>
void swap(int *x, int *y)
{
    int swap;
    swap = *x;
    *x = *y;
    *y = swap;
}

void sortarr(int arr[], int size)
{
    int i, j;
    for (i = 0; i < size; i++)
    {
        for (j = i+1; j < size; j++)
        {
            if (arr[i] > arr[j])
            {
                swap(&arr[i], &arr[j]);
            }
        }
    }
}
void printarr(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
    {
        printf("%d\n", arr[i]);
    }
}

void main()
{
    int arr[5] = {43,64,54,23,45};
    int length = sizeof(arr) / sizeof(arr[0]);
    sortarr(arr, length);
    printarr(arr, length);
}
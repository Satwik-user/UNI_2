#include <stdio.h>

int partition(int arr[], int l, int r)
{
    int pivot = l;
    int i = l + 1, j = r;
    while(i < j)
    {
        do
        {
            i++;
        }while(arr[i] < arr[pivot]);

        do
        {
            j++;
        }while(arr[j] > arr[pivot]);
        if(i < j)
        swap(&arr[i], &arr[j]);
    }
    swap(&arr[pivot], &arr[j]);
}


#include <stdio.h>
#include <stdlib.h>

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int partition(int arr[], int l, int r)
{
    int pivot = arr[l];
    int i = l + 1, j = r;
    while(i < j)
    {
        while(i <= r && arr[i] < pivot)
        i++;

        while(j >= l && arr[j] > pivot)
        j--;

        if(i < j)
        swap(&arr[i], &arr[j]);
    }
    swap(&arr[l], &arr[j]);
    return j;
}

int quick_select(int arr[], int l, int r)
{
    int mid = l + (r - l) / 2;
    if(l < r)
    {
        int pivot = partition(arr, l, r);
        if(pivot == mid)
        return pivot;
        else if(pivot < mid)
        quick_select(arr, pivot + 1, r);
        else
        quick_select(arr, l, pivot - 1);
    }
}
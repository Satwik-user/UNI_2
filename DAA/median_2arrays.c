#include <stdio.h>
#include <stdlib.h>

void merge(int L[], int R[], int n)
{
    int *arr = (int *)malloc(2*n * sizeof(int));

    int i = 0, j = 0, k = 0;
    while(i < n && j < n)
    {
        if(L[i] < R[j])
        arr[k++] = L[i++];
        else
        arr[k++] = L[j++];
    }
}

int median(int arr[], int n)
{
    
}
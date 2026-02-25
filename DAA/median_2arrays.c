#include <stdio.h>
#include <stdlib.h>

void merge(int L[], int R[], int l, int r)
{
    int *arr = (int *)malloc((l + r) * sizeof(int));

    int i = 0, j = 0, k = 0;
    while(i < l && j < r)
    {
        if(L[i] < R[j])
        arr[k++] = L[i++];
        else
        arr[k++] = L[j++];
    }
    
    while(i < l)
    arr[k++] = L[i++];
    
}
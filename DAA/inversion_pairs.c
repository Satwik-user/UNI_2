#include <stdio.h>

long merge_count(int arr[], int l, int r, int m)
{
    int n1 = m - l + 1;
    int n2 = r - m;

    int L[n1], R[n2];
    for(int i=0; i<n1; i++)
    L[i] = arr[l + i];
    for(int j=0; j<n2; j++)
    R[j] = arr[m + j + 1];

    long inv = 0;
    int i=0, j = 0, k = l;

    while(i < n1 && j < n2)
    {
        if(L[i] < R[j])
        arr[k++] = L[i++];
        else
        {
            arr[k++] = R[j++];
            inv += n1 - i;
        }
    }

    while(i < n1)
    arr[k++] = L[i++];
    while(j < n2)
    arr[k++] = R[j++];
}
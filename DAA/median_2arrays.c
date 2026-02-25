#include <stdio.h>
#include <stdlib.h>

int* merge(int *L, int *R, int n)
{
    int *arr = (int *)malloc(2*n * sizeof(int));

    int i = 0, j = 0, k = 0;
    while(i < n && j < n)
    {
        if(L[i] < R[j])
        arr[k++] = L[i++];
        else
        arr[k++] = R[j++];
    }
    
    return arr;
}

int median(int arr[], int n)
{
    int m;
    if(n % 2 == 0)
    m = (n + 1) / 2;
    else
    m = n / 2;

    return m;
}

int main()
{
    int n;
    printf("Enter size of both arrays:");
    scanf("%d", &n);

    int *L = (int *)malloc(n * sizeof(int));
    int *R = (int *)malloc(n * sizeof(int));
    for(int i=0; i<n; i++)
    {
        printf("Enter element of array 1:");
        scanf("%d", &L[i]);
    }
    printf("\n");
    for(int i=0; i<n; i++)
    {
        printf("Enter element of array 2:");
        scanf("%d", &R[i]);
    }
    printf("\n");

    int *arr = merge(L, R, n);
    
    printf("Median of sorted arrays: %d\n", median(arr, n));
    
    return 0;
}
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

int quick_select(int arr[], int l, int r, int mid)
{
    if(l <= r)
    {
        int pivot = partition(arr, l, r);
        if(pivot == mid)
        return pivot;
        else if(pivot < mid)
        return quick_select(arr, pivot + 1, r, mid);
        else
        return quick_select(arr, l, pivot - 1, mid);
    }
    return -1;
}

int main()
{
    int n;
    printf("Enter size of array:");
    scanf("%d", &n);

    int *arr = (int *)malloc(n * sizeof(int));
    for(int i=0; i<n; i++)
    {
        printf("Enter element:");
        scanf("%d", &arr[i]);
    }

    int mid = n / 2;
    int median = quick_select(arr, 0, n - 1, mid);

    printf("Median element:%d\n", arr[median]);
    if(median - 1 >= 0)
    printf("Left Neighbour:%d\n", arr[median - 1]);
    if(median + 1 < n)
    printf("Right Neighbour:%d\n", arr[median + 1]);
    
    return 0;
}

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

    int median = quick_select(arr, 0, n - 1);

    printf("Median element:%d\n", arr[median]);
    printf("Left Neighbour:%d\n", arr[median - 1]);
    printf("Right Neighbour:%d\n", arr[median + 1]);
    
    return 0;
}

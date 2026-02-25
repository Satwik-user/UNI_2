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

int quick_select(int arr[], int l, int r, int k)
{
    if(l <= r)
    {
        int pivot = partition(arr, l, r);
        if(pivot == k)
        return pivot;
        else if(pivot < k)
        return quick_select(arr, pivot + 1, r, k);
        else
        return quick_select(arr, l, pivot - 1, k);
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
    }printf("\n");

    int mid = n / 2;

    int median = quick_select(arr, 0, n - 1, mid);
    int left_n = quick_select(arr, 0, n - 1, mid - 1);
    int right_n = quick_select(arr, 0, n - 1, mid + 1);

    printf("Median element:%d\n", arr[median]);
    if(median - 1 >= 0)
    printf("Left Neighbour:%d\n", arr[left_n]);
    if(median + 1 < n)
    printf("Right Neighbour:%d\n", arr[right_n]);
    
    return 0;
}

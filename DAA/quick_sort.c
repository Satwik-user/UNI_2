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
    int pivot = l;
    int i = l, j = r;
    while(i < j)
    {
        while(i <= r)
        {
            if(arr[i] > arr[pivot])
            i++;
        }while(i <= r && arr[i] < arr[pivot]);

        while(j >= l && arr[j] > arr[pivot])
        {
            j--;
        }
        if(i < j)
        swap(&arr[i], &arr[j]);
    }
    swap(&arr[pivot], &arr[j]);
    return j;
}

void quick_sort(int arr[], int l, int r)
{
    if(l < r)
    {
        int pivot = partition(arr, l, r);
        quick_sort(arr, l, pivot - 1);
        quick_sort(arr, pivot + 1, r);
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

    quick_sort(arr, 0, n-1);

    printf("Sorted elements:");
    for(int i=0; i<n; i++)
    printf("%d ", arr[i]);
    printf("\n");

    free(arr);
    
    return 0;
}
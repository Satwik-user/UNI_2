#include <stdio.h>
#include <stdlib.h>

void bucketSort(int arr[], int n)
{
    int *bucket = (int *)calloc(n, sizeof(int));
    
    for(int i = 0; i < n; i++)
        bucket[arr[i]]++;
    
    int index = 0;
    for(int i = 0; i < n; i++)
        for(int j = 0; j < bucket[i]; j++)
            arr[index++] = i;
}

int main()
{
    int n;
    printf("Enter array size:");
    scanf("%d", &n);

    int *arr = (int *)malloc(n * sizeof(int));
    for(int i=0; i<n; i++)
    {
        printf("Enter element:");
        scanf("%d", &arr[i]);
    }
    
    printf("Original: ");
    for(int i = 0; i < n; i++) printf("%d ", arr[i]);
    
    bucketSort(arr, n);
    
    printf("\nSorted: ");
    for(int i = 0; i < n; i++) printf("%d ", arr[i]);
    printf("\n");
    
    return 0;
}
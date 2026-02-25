#include <stdio.h>
#include <stdlib.h>

void bucketSort(int arr[], int n) {
    int bucket[10] = {0};
    
    for(int i = 0; i < n; i++)
        bucket[arr[i]]++;
    
    int index = 0;
    for(int i = 0; i < 10; i++)
        for(int j = 0; j < bucket[i]; j++)
            arr[index++] = i;
}

int main() {
    int arr[] = {5, 2, 8, 1, 9, 2, 7, 3, 5, 1};
    int n = 10;
    
    printf("Original: ");
    for(int i = 0; i < n; i++) printf("%d ", arr[i]);
    
    bucketSort(arr, n);
    
    printf("\nSorted: ");
    for(int i = 0; i < n; i++) printf("%d ", arr[i]);
    printf("\n");
    
    return 0;
}
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n, k;
    printf("Enter size of array:");
    scanf("%d", &n);

    int *arr = (int *)malloc(n * sizeof(int));
    for(int i=0; i<n; i++)
    {
        printf("Enter element:");
        scanf("%d", &arr[i]);
    }

    printf("Enter k:");
    scanf("%d")

    for(int i=1; i<n; i++)
    {
        int key = arr[i];
        int j = i - 1;
        while(j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }

    printf()
    
    return 0;
}
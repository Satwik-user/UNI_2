#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n, key;
    printf("Enter size of array:");
    scanf("%d", &n);

    int *arr = (int *)malloc(n * sizeof(int));
    printf("Enter sorted array:");
    for(int i=0; i<n; i++)
    {
        printf("Enter element:");
        scanf("%d", &arr[i]);
    }

    printf("Enter search key:");
    scanf("%d", &key);

    int left = 0, right = n - 1, mid, f = 0;
    while(left <= right)
    {
        mid = left + (right - left) / 2;
        if(mid == key)
        {
            f = 1;
            break;
        }
        else if(key < mid)
        right = mid - 1;
        else
        left = mid + 1;
    }

    if(f == 1)
    printf("Element found in array!\n");
    else
    printf("Element not found in array\n");
    
    return 0;
}
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

    int left = 0, right = n - 1, mid;
    while(left <= right)
    {
        mid = left + (right - left) / 2;
        if(mid == key)
        {
            
        }
    }
    
    return 0;
}
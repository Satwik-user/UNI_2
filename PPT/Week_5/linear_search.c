#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n, key;
    printf("Enter array:");
    scanf("%d", &n);

    printf("Enter search key:");
    scanf("%d", &key);

    int *arr = (int *)malloc(n * sizeof(int));
    for(int i=0; i<n; i++)
    {
        printf("Enter element:");
        scanf("%d", &arr[i]);
    }
    
    return 0;
}
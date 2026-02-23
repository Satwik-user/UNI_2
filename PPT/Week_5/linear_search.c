#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n, key, f = 0;
    printf("Enter array size:");
    scanf("%d", &n);

    int *arr = (int *)malloc(n * sizeof(int));
    for(int i=0; i<n; i++)
    {
        printf("Enter element:");
        scanf("%d", &arr[i]);
    }

    printf("Enter search key:");
    scanf("%d", &key);

    for(int i=0; i<n; i++)
    {
        if(arr[i] == key)
        {
            f = 1;
            break;
        }
    }

    if(f == 1)
    printf("Element found in array!\n");
    else
    printf("Element not found in array\n");
    
    return 0;
}
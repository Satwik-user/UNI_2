#include <stdio.h>
#include <stdlib.h>
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

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<i-1; j++)
        {
            
        }
    }
    
    return 0;
}
#include <stdio.h>
#include <stdlib.h>
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

    for(int i=1; i<n; i++)
    {
        int key = arr[i];
        int j = i - 1;
        while(j >= 0 && )
    }
    
    return 0;
}
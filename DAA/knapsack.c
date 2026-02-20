#include <stdio.h>
int main()
{
    int n;
    printf("Enter no of objects:");
    scanf("%d", &n);

    int *weight = (int *)malloc(n * sizeof(int));
    int *profit = (int *)malloc(n * sizeof(int));

    printf("Enter weight array:\n");
    for(int i=0; i<n; i++)
    {
        printf("Enter weight array elements:");
        scanf("%d", &weight[i]);
    }

    printf("ENter profit array:\n");
    for(int i=0; i<n; i++)
    {
        printf("Enter profit array elements:");
        scanf("%d", &profit[i]);
    }

    
    
    return 0;
}
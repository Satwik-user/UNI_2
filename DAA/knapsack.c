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

    printf("Enter profit array:\n");
    for(int i=0; i<n; i++)
    {
        printf("Enter profit array elements:");
        scanf("%d", &profit[i]);
    }

    int cap;
    printf("Enter maximum capacity of sack:");
    scanf("%d", &cap);

    int *ratio = (int *)malloc(n * sizeof(int));
    for(int i=0; i<n; i++)
    ratio[i] = profit[i] / weight[i];

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<i; j++)
        {
            
        }
    }
    
    return 0;
}
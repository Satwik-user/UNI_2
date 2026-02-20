#include <stdio.h>
int main()
{
    int n;
    printf("Enter no of objects:");
    scanf("%d", &n);

    int *weight = (int *)malloc(n * sizeof(int));
    int *profit = (int *)malloc(n * sizeof(int));

    printf("Enter weight array:");
    for(int i=0; i<n; i++)
    {
        printf("Enter weight array elements:");
        scanf("%d", &weight[i]);
    }
    
    return 0;
}
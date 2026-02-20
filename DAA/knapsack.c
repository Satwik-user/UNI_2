#include <stdio.h>
int main()
{
    int n;
    printf("Enter no of objects:");
    scanf("%d", &n);

    int *weight = (int *)malloc(n * sizeof(int));
    int *profit = (int *)malloc(n * sizeof(int));

    
    
    return 0;
}
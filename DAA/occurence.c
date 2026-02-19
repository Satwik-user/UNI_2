#include <stdio.h>
int main()
{
    int n;
    printf("Enter size of array:");
    scanf("%d", &n);

    int *arr = (int *)malloc(n * aizeof(n));
    
    return 0;
}
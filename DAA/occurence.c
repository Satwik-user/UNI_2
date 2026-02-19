#include <stdio.h>
int main()
{
    int n;
    printf("Enter size of array:");
    scanf("%d", &n);

    int *arr = (int *)malloc(n * aizeof(n));
    for(int i=0; i<n; i++)
    {
        printf("Enter element:");
        scanf("%d", arr[i]);
    }
    
    return 0;
}
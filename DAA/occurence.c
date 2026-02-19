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

    int X;
    printf("Enter search element:");
    scanf("%d", &X);

    int l = 0, r = n-1, mid;
    while(l <= r)
    {
        mid = l + (r - l) / 2;
        if(arr[mid] == X)
        {
            int count = 1;
        }
    }
    
    free(arr);
    return 0;
}
#include <stdio.h>
int main()
{
    int n;
    printf("Enter number of elements:");
    scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n; i++)
    {
        printf("Enter element:");
        scanf("%d", &arr[i]);
    }
    
    int bitonic_point = -1;
    for(int i=0; i<n-1; i++)
    {
        if(arr[i] < arr[i+1])
        continue;
        else
        {
            bitonic_point = i;
            break;
        }
    }

    printf("Bitonic found at %dth index\n", bitonic_point);

    return 0;
}
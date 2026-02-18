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
    
    int bitonic = 0;
    for(int i=0; i<n-1; i++)
    {
        if(arr[i] < arr[i+1])
        continue;
        else
        {
            
        }
    }

    return 0;
}
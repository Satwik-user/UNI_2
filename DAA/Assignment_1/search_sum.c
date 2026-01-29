#include <stdio.h>
int main()
{
    int n;
    printf("Enter number of elements:");
    scanf("%d", &n);

    int arr[n];
    printf("Enter elements in sorted order:");
    for(int i=0; i<n; i++)
    {
        printf("Enter element:");
        scanf("%d", &arr[i]);
    }

    int left = 0, right = n-1, f = 0;
    while(left < right)
    

    return 0;
}
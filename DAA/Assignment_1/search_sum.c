#include <stdio.h>
int main()
{
    int n;
    printf("Enter number of elements:");
    scanf("%d", &n);

    int X;
    printf("Enter search sum number:");
    scanf("%d", &X);

    int arr[n];
    printf("Enter elements in sorted order|n");
    for(int i=0; i<n; i++)
    {
        printf("Enter element:");
        scanf("%d", &arr[i]);
    }

    int left = 0, right = n-1, f = 0;
    while(left < right)
    {
        int sum = arr[left] + arr[right];
        if(sum == X)
        {
            f = 1;
            break;
        }
        else if(sum < X)
        left++;
        else
        right--;
    }

    if(f == 1)
    printf("%d and %d sums up to %d", arr[left], arr[right], X);
    else
    printf("Sum not found!");

    return 0;
}
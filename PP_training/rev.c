#include <stdio.h>
int main()
{
    int n;
    printf("Enter size of array:");
    scanf("%d",&n);
    int arr[n],rev[n];
    for(int i=0;i<n;i++)
    {
        printf("Enter element:");
        scanf("%d",&arr[i]);
    }

    for(int i=0;i<n;i++)
    {
        rev[i]=arr[n-i-1];
    }
    
    return 0;
}
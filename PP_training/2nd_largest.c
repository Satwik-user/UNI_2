#include <stdio.h>
int main()
{
    int n;
    printf("Enter size of array:");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        printf("Enter element:");
        scanf("%d",&arr[i]);
    }

    int max1,max2;
    if(arr[0]>arr[1])
    {
        max1=arr[0];
        max2=arr[1];
    }
    else
    {
        max1=arr[1];
        max2=arr[0];
    }
    for(int i=2;i<n;i++)
    {
        if(arr[i]>max1)
        max2=max1;
        max1=arr[i];
    }
    
    return 0;
}
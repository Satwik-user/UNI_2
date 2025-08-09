#include <stdio.h>
int main()
{
    int n,f=0;
    printf("Enter size of array:");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        printf("Enter element:");
        scanf("%d",&arr[i]);
    }

    for(int i=1;i<n;i++)
    {
        if(arr[i]<arr[i-1])
        {
            f=1;
            break;
        }
    }
    if("")
    
    return 0;
}
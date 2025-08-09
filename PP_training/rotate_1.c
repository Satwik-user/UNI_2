#include <stdio.h>
int main()
{
    int n;
    printf("Enter size of array:");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        printf("Enetr element:");
        scanf("%d",&arr[i]);
    }

    int temp=arr[0];
    for(int i=1;i<n;i++)
    {
        int temp=arr[i-1];
        arr[i-1]=arr[i]
    }
    
    return 0;
}
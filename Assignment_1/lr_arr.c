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
    int k;
    printf("Enter value of k:");
    scanf("%d",&k);
    while(k>0)
    {
        int temp=arr[0];
        for(int j=0;j<n-1;j++)
        {
            arr[j]=arr[j+1];
                    arr[n-1]=temp;

        }
        k--;
    }
    printf("Left rotation array:");
    for(int i=0;i<n;i++)
    {
        printf("%d ",&arr[i]);
    }
    while(k>0)
    {
        int temp=arr[n];
        for(int j=0;j<n-1;j++)
        {
            arr[j]=arr[j+1];
            arr[0]=temp;
        }
        k--;
    }
    
    return 0;
}
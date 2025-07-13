#include <stdio.h>
int main()
{
    int n;
    printf("Enter size of array:");
    scanf("%d",&n);
    int arr[n], l_arr[n], r_arr[n];
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
            l_arr[j]=arr[j+1];
        }
        l_arr[n-1]=temp;
        k--;
    }
    printf("Left rotation array:");
    for(int i=0;i<n;i++)
    {
        printf("%d ",&l_arr[i]);
    }
    while(k>0)
    {
        int temp=arr[n];
        for(int j=0;j<n-1;j++)
        {
            r_arr[j+1]=arr[j];
        }
        r_arr[0]=temp;
        k--;
    }
    printf("Right rotation array:");
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    
    return 0;
}
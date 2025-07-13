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
    for(int i=0;i<n;i++)
    {
        l_arr[i]=arr[i];
        r_arr[i]=arr[i];
    }
    int k, cpy_k;
    printf("Enter value of k:");
    scanf("%d",&k);
    cpy_k=k;
    while(k>0)
    {
        int temp=l_arr[0];
        for(int j=0;j<n-1;j++)
        {
            l_arr[j]=l_arr[j+1];
        }
        l_arr[n-1]=temp;
        k--;
    }
    printf("Left rotation array:");
    for(int i=0;i<n;i++)
    {
        printf("%d ",l_arr[i]);
    }
    printf("\n");
    while(cpy_k>0)
    {
        int temp=r_arr[n-1];
        for(int j=n-2;j;j++)
        {
            r_arr[j+1]=r_arr[j];
        }
        r_arr[0]=temp;
        cpy_k--;
    }
    printf("Right rotation array:");
    for(int i=0;i<n;i++)
    {
        printf("%d ",r_arr[i]);
    }
    printf("\n");
    
    return 0;
}
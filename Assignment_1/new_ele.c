#include <stdio.h>
int main()
{
    int n;
    printf("Enter size of array:");
    scanf("%d",&n);
    int arr[n+1];
    for(int i=0;i<n;i++)
    {
        printf("Enter element:");
        scanf("%d",&arr[i]);
    }
    int ele,pos;
    printf("Enter element and position:");
    scanf("%d %d",&ele,&pos);
    arr[pos]=ele;
    printf("Modified array:");
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    
    return 0;
}
#include <stdio.h>
int main()
{
    int n,ele;
    printf("Enter size of array:");
    scanf("%d",&n);
    int arr[n+1];
    for(int i=0;i<n;i++)
    {
        printf("Enter element:");
        scanf("%d",&arr[i]);
    }
    printf("Enter element to be inserted:");
    scanf("%d",&ele);
    arr[n]=ele;
    printf("Modified Array:");
    for(int i=0;i<=n;i++)
    {
        printf("%d",arr[i]);
    }
    printf("\n");
    
    return 0;
}
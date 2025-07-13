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
    printf("Array:");
    for(int i=0;i<n;i++)
    {
        printf("%d",arr[i]);
    }
    printf("\n");
    
    return 0;
}
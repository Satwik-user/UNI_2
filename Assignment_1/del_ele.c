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
    int del_pos;
    pritnf("Enter position of element to be deleted:");
    scanf("%d",&del_pos);
    for(int i=del_pos;i<n-1;i++)
    {
        arr[i]=arr[i+1];
    }
    printf("Modified array:");
    for(int i=0;i<n-1;i++)
    
    
    return 0;
}
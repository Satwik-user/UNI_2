#include <stdio.h>
int main()
{
    int n;
    printf("Enter size of array:");
    scanf("%d",&n);
    int arr[n],freq[n];
    for(int i=0;i<n;i++)
    {
        printf("Enter element:");
        scanf("%d",&arr[i]);
        freq[i]=-1;
    }

    for(int i=0;i<n;i++)
    {
        if(freq[i]!=0)
        {
            int c=1;
            
        }
    }
    
    return 0;
}
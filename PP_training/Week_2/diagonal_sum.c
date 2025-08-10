#include <stdio.h>
int main()
{
    int m,n,s=0;
    printf("Enter the row and column size:");
    scanf("%d %d",&m,&n);
    int arr[m][n];
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("Enter element:");
            scanf("%d",&arr[i][j]);
        }
    }

    printf("Given Matrix:");
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            
        }
    }
    if(m==n)
    {
        for(int i=0;i<m;i++)
        {
            s+=arr[i][i];
        }
        printf("Sum of diagonal elements:%d\n",s);
    }
    else
    printf("Not a square matrix\nSum not possible");
    
    return 0;
}
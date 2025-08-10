#include <stdio.h>
int main()
{
    int m,n,c=0;
    printf("Enter row and column sizes:");
    scanf("%d %d",&m,&n);
    int arr[m][n];
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("Enetr element:");
            scanf("%d",&arr[i][j]);
        }
    }

    printf("Given Matrix:\n");
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("%2d",arr[i][j]);
        }
        printf("\n");
    }

    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(arr[i][j]==0)
            c++;
        }
    }
    printf("Number of zeroes in matrix:%d\n",c);
    
    return 0;
}
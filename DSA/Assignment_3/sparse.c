#include <stdio.h>
int main()
{
    int m,n;
    printf("Enter row and colummn size:");
    scanf("%d %d",&m,&n);
    int arr[m][n];
    for(int  i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("Enter element:");
            scanf("%d",&arr[i][j]);
        }
    }

    int c=0;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(arr[i][j]==0)
            c++;
        }
    }
    if(c>m*n/2)
    printf("Sparse matrix\n");
    else
    printf("Not a sparse matrix\n");
    
    return 0;
}
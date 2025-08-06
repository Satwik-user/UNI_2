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
    printf("Matrix:\n");
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }

    for(int i=0;i<m;i++)
    
    return 0;
}
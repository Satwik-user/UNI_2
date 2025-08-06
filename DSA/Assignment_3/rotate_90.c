#include <stdio.h>
int main()
{
    int m,n;
    printf("Enter row and column size:");
    scanf("%d %d",&m,&n);
    int arr[m][n],rot[m][n];
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("Enter element:");
            scanf("%d",&arr[i][j]);
        }
    }

    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            rot[j][n-i-1]=arr[i][j];
        }
    }

    printf("Rotated matrix:\n");
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("%d ",rot[i][j]);
        }
        printf("\n");
    }

    return 0;
}
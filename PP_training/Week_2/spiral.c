#include <stdio.h>
int main()
{
    int m,n;
    printf("Enter row and column size:");
    scanf("%d %d",&m,&n);
    int arr[m][n],spi[m][n];

    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("Enter element:");
            scanf("%d",&arr[i][j]);
        }
    }

    printf("Original Matrix:\n");
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("%2d ",arr[i][j]);
        }
        printf("\n");
    }
    
    int row_start=0,row_end=m-1;
    int col_start=0,col_end=n-1;
    while(row_start<=row_end && col_start<=col_end)
    {
        for(int i=col_start;i<=col_end;i++)
        printf("%d ",arr[row_start][i]);
        row_start++;
        for(int i=row_start;i<=row_end;i++)
        printf("%d ",arr[i][col_end]);
        col_end--;
        if(row_start<=row_end)
        {
            for(int i=col_end;i>=col_start;i--)
            printf("%d",arr[row_end][i]);
            row_end--;
        }
        if(col_start<=col_end)
        {
            for(int i=row_end;i>=row_start;i--)
            printf("%d",arr[i][col_start]);
            col_start++;
        }
    }

    printf("Spiral matrix:\n");
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("%2d ",arr[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
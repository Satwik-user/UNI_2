#include <stdio.h>
int main()
{
    int m,n,ele,pos_row,pos_col;
    printf("Enter row and column size:");
    scanf("%d %d",&m,&n);
    int arr[m][n],res[m+1][n+1];
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("Enter element:");
            scanf("%d",&arr[i][j]);
        }
    }

    printf("Original Array:\n");
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }

    printf("Enter element to be inserted:");
    scanf("%d",&ele);
    printf("Enter row and column index of new element:");
    scanf("%d %d",&pos_row,&pos_col);

    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i==pos_row && j==pos_col)
            res[i][j]=ele;
            else if(i==pos_row && j>pos_col)
            res[i][j]=arr[i][j-1];
            else if(i>pos_row && j==pos_col)
            res[i][j]=arr[i-1][j];
            else if(i>pos_row && j>pos_col)
            res[i][j]=arr[i-1][j-1];
            else
            res[i][j]=arr[i][j];
        }
    }
    
    printf("Modified array:\n");
    for(int i=0;i<=m;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("%d ",res[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
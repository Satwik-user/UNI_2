#include <stdio.h>
int main()
{
    int m,n,ele,pos_row,pos_col;
    printf("Enter row and column size:");
    scnaf("%d %d",&m,&n);
    int arr[m][n];
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("Enter element:");
            scanf("%d",&arr[i][j]);
        }
    }
    printf("Enter element to be inserted:");
    scanf("%d",&ele);
    printf("Enter row and column index of new element:");
    scanf("%d %d",&pos_row,&pos_col);
    arr[pos_row][pos_col]=ele;
    
    printf("Modified array:\n");
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
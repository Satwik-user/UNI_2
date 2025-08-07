#include <stdio.h>
int main()
{
    int m,n,r1,r2;
    printf("Enter row and column size:");
    scanf("%d %d",&m,&n);
    int arr[m][n];
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("ENetr element:");
            scanf("%d",&arr[i][j]);
        }
    }

    printf("Original matrix:\n");
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    
    printf("Enter rows to interchange:");
    scanf("%d %d",&r1,&r2);
    for(int j=0;j<n;j++)
    
    
    return 0;
}
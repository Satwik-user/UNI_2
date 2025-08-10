#include <stdio.h>
int main()
{
    int m,n;
    printf("Enter row and column size:");
    scanf("%d %d",&m,&n);
    int arr[m][n],trans[m][n];
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
            printf("%2d",arr[i][j]);
        }
        printf("\n");
    }

    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            trans[i][j]=arr[j][i];
        }
    }

    printf("Transpose Matrix:\n");
    for(int i=0;i<m;i++)
    {
        for(int  j=0;j<n;j++)
        {
            printf("%2d",trans[i][j]);
        }
    }
    
    return 0;
}
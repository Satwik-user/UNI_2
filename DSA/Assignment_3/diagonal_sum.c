#include <stdio.h>
int main()
{
    int m,n;
    printf("Enter the row and column size:");
    scnaf("%d %d",&m,&n);
    int arr[m][n];
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("Enter element:");
            scanf("%d",arr[i][j]);
        }
    }
    if(m==n)
    {}
    
    return 0;
}
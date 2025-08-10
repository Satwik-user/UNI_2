#include <stdio.h>
int main()
{
    int m,n,f=0;
    printf("Enter row and column sizes:");
    scanf("%d %d",&m,&n);
    if(m==n)
    {
        int arr[m][n];
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
                if(i==j)
                {
                    if(arr[i][j]!=1)
                    {
                        f=1;
                        break;
                    }
                }
                else
                {
                    if(arr[i][j]!=0)
                    
                }
            }
        }
        if(f==1)
        printf("Identity matrix\n");
        else
        printf("Not an Identity matrix\n");
    }
    else
    printf("Enter square matrix for 'identity' check!\n");
    
    return 0;
}
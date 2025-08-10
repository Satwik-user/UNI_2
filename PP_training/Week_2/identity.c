#include <stdio.h>
int main()
{
    int m,n;
    printf("Enter row and column sizes:");
    scanf("%d %d",&m,&n);
    if(m==n)
    {
        int arr[m][n];
        int f=0;
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                printf("Enter element:");
                scanf("%d",&arr[i][j]);
            }
        }

        printf("Given Matrix:\n");
        for(int i=0;i<m;i++)
        

        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(i==j && arr[i][j]!=1)
                {
                    f=1;
                    break;
                }
                else if(i!=j && arr[i][j]!=0)
                {
                    f=1;
                    break;
                }
            }
            if(f==1)
            break;
        }
        if(f==0)
        printf("Identity matrix\n");
        else
        printf("Not an Identity matrix\n");
    }
    else
    printf("Enter square matrix for 'identity' check!\n");
    
    return 0;
}
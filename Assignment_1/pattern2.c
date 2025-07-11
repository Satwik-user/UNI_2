#include <stdio.h>
int main()
{
    int n;
    printf("Enter no of lines:");
    scanf("%d",&n);
    for(int i=n;i>=1;i--)
    {
        for(int j=0;j<=i-1;j++)
        {
            printf(" ");
        }
        for(int k=n;k>=i;k--)
        {
            printf("%d",k);
        }
        for(int l=i+1;l<=n;l++)
        {
            printf("%d",l);
        }
        printf("\n");
    }
    for(int i=n;i>=1;i--)
    {
        for(int j=0;j<=n-i+1;j++)
        {
            printf(" ");
        }
        for(int k=n;k>=n-i+2;k--)
        {
            printf("%d",k);
        }
        for(int l=n-i+3;l<=n;l++)
        {
            printf("%d",l);
        }
        printf("\n");
    }
    
    return 0;
}
#include <stdio.h>
int main()
{
    int m,n;
    printf("Enter size of two polynomials:");
    scanf("%d %d",&m,&n);
    int A[m],B[n];
    for(int i=0;i<m;i++)
    {
        printf("Enter element of A[%d]:",i);
        scanf("%d",&A[i]);
    }
    for(int i=0;i<m;i++)
    {
        printf("Enter element of B[%d]:",i);
        scanf("%d",&B[i]);
    }

    int multi[m+n-1];
    for(int i=0;i<m+n-1;i++)
    multi[i]=0;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            multi[i+j]+=A[i]*B[j];
        }
    }
    
    printf("Multiplication Array:");
    for(int i=0;i<m+n-1;i++)
    {
        printf("%d ",multi[i]);
    }
    
    return 0;
}
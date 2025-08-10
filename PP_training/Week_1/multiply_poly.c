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

    for(int i=0;i<m;i++)
    
    return 0;
}
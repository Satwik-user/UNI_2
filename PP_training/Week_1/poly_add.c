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
    for(int i=0;i<n;i++)
    {
        printf("Enter element of B[%d]:",i);
        scanf("%d",&B[i]);
    }

    printf("Array A:");
    for(int i=0;i<m;i++)
    {
        printf("%d ",A[i]);
    }
    printf("\n");

    printf("Array B:");
    for(int i=0;i<m;i++)
    {
        printf("%d ",B[i]);
    }
    printf("\n");

    int lesser=(m<n)?m:n;
    int sum[lesser];
    for(int i=0;i<lesser;i++)
    {
        sum[i]=A[i]+B[i];
    }

    printf("Sum of polynomials:");
    for(int i=0;i<lesser;i++)
    {
        printf("%d ",sum[i]);
    }
    printf("\n");
    
    return 0;
}
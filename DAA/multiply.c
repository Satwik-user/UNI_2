#include <stdio.h>
int main()
{
    int n1, m1, n2, m2;
    printf("Enter row and column size of matrices:");
    scanf("%d %d %d %d", &n1, &m1, &n2, &m2);

    int A[n1][m1], B[n2][m2];

    printf("Enter 1st matrx:\n");
    for(int i=0; i<n1; i++)
    {
        for(int j=0; j<m1; j++)
        {
            printf("Enter element:");
            scanf("%d", &A[i][j]);
        }
    }

    printf("Enter 2nd matrix:\n");
    for(int i=0; i<n2; i++)
    {
        for(int j=0; j<m2; j++)
        {
            printf("Enter element:");
            scanf("%d", &B[i][j]);
        }
    }


    int C[n1][m2];
    for(int i=0; i<n1; i++)
    {
        for(int j=0; j<m2; j++)
        {
            C[i][j] = 0;
            for(int k=0; k<m1; k++)
            C[i][j] += A[i][k] * B[k][j];
        }
    }

    printf("Resultant Matrix:");
    for(int i=0; i<n1; i++)
    {
        for(int j=0; j<m2; j++)
        {
            printf("%d ", C[i][j]);
            
        }
    }
    
    return 0;
}
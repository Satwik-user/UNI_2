#include <stdio.h>
int main()
{
    int n1, m1, n2, m2;
    printf("Enter row and column size of matrices:");
    scanf("%d %d %d %d", &n1, &m1, &n2, m2);

    int A[n1][m1], B[n2][m2];

    printf("Enter 1st matrx:\n");
    for(int i=0; i<n1; i++)
    {
        for(int j=0; j<m1; j++)
        {
            printf("Enter element:");
            scanf("%d", A[i][j]);
        }
    }
    
    return 0;
}
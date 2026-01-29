#include <stdio.h>
int main()
{
    int n, m;
    printf("Enter number of rows and columns:");
    scanf("%d %d", &n, &m);

    int arr[n][m];
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            printf("Enter element:");
            scanf("%d", &arr[i][j]);
        }
    }
    
    return 0;
}
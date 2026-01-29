#include <stdio.h>
int main()
{
    int n, m;
    printf("Enter number of rows and columns:");
    scanf("%d %d", &n, &m);

    int arr[n][m];
    printf("Enter sorted elements");
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            printf("Enter element:");
            scanf("%d", &arr[i][j]);
        }
    }

    int left = 0, right = m*n-1, f = 0;
    while(left <= right)
    {
        int mid = left + (right - left) / 2;
        int r = mid / m;
    }
    
    return 0;
}
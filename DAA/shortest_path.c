#include <stdio.h>
#include <limits.h>
int main()
{
    int n;
    printf("Enter size of rows and columns:");
    scanf("%d", &n);

    int dist[n][n];
    for(int i=0; i<n; i++)
    for(int j=0; j<n; j++)
    scanf("%d", dist[i][j]);

    for(int k=0; k<n; k++)
    {
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n; j++)
            {
                if(dist[i][k] + dist[k][j] < dist[i][j])
                dist[i][j] = dist[i][k] + dist[k][j];
            }
        }
    }

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(dist[i][j] == INT_MAX)
            printf("INT_MAX");
            else
            printf("%d", dist[i][j]);
        }
        printf("\n");
    }

    return 0;
}
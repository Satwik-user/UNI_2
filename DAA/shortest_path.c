#include <stdio.h>
int main()
{
    int row, col;
    printf("Enter size of rows and columns:");
    scanf("%d %d", &row, &col);

    int dist[row][col];
    for(int i=0; i<row; i++)
    for(int j=0; j<col; j++)
    scanf("%d", dist[i][j]);

    for(int k=0; k<col; k++)
    {}

    return 0;
}
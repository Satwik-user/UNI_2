#include <stdio.h>
int main()
{
    int row, col, search_ele;
    printf("Enter number of rows and columns:");
    scanf("%d %d", &row, &col);

    printf("Enter search element:");
    scanf("%d", &search_ele);

    int arr[row][col];
    printf("Enter sorted elements");
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            printf("Enter element:");
            scanf("%d", &arr[i][j]);
        }
    }

    int left = 0, right = col*row-1, f = 0;
    while(left <= right)
    {
        int mid = left + (right - left) / 2;
        int r = mid / col;
        int c = mid % col;
        int cur = arr[r][c];
        
        if(cur == search_ele)
        {
            f = 1;
            break;
        }
        else if(cur < search_ele)
        left = mid + 1;
        
    }
    
    return 0;
}
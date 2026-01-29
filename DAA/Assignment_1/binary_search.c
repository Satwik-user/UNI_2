#include <stdio.h>
int main()
{
    int n, search_ele;
    printf("Enter number of elements:");
    scanf("%d", &n);

    int arr[n];
    printf("Enter elements in sorted order:\n");
    for(int i=0; i<n; i++)
    {
        printf("Enter element:");
        scanf("%d", arr[i]);
    }

    printf("Enter search element:");
    scanf("%d", &search_ele);

    int left = 0, right = n-1, f = 0;
    while(left < right)
    {
        int mid = left + (right - left) / 2;
        if(mid == search_ele)
        {
            f = 1;
            break;
        }
        else if(mid < search_ele)
        left = mid + 1;
        else
        right = mid -1;
    }
    
    return 0;
}
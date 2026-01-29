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
        scanf("%d", &arr[i]);
    }

    printf("Enter search element:");
    scanf("%d", &search_ele);

    int left = 0, right = n-1, mid, f = 0;
    while(left <= right)
    {
        mid = left + (right - left) / 2;
        if(arr[mid] == search_ele)
        {
            f = 1;
            break;
        }
        else if(arr[mid] < search_ele)
        left = mid + 1;
        else
        right = mid -1;
    }
    
    if(f == 1)
    printf("Element found at position %d\n", mid);
    else
    printf("Element not found!\n");
    
    return 0;
}
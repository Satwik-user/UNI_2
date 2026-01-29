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

    
    return 0;
}
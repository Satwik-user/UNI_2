#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n;
    printf("Enter size of array:");
    scanf("%d", &n);

    int *arr = (int *)malloc(n * sizeof(int));
    for(int i=0; i<n; i++)
    {
        printf("Enter element:");
        scanf("%d", &arr[i]);
    }

    int X;
    printf("Enter search element:");
    scanf("%d", &X);

    int l = 0, r = n-1, mid, count = 0;
    while(l <= r)
    {
        mid = l + (r - l) / 2;
        if(arr[mid] == X)
        {
            count = 1;
            l = mid - 1, r = mid + 1;

            while(l >= 0 && arr[l] == X)
            {
                count++;
                l--;
            }

            while(r < n && arr[r] == X)
            {
                
            }

            break;
        }
        else if(arr[mid] < X)
        l = mid + 1;
        else
        r = mid - 1;
    }

    printf("Occurences of %d in array: %d\n", X, count);
    
    free(arr);
    return 0;
}
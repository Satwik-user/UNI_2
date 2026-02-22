#include <stdio.h>
#include <limits.h>
#include <stdlib.h>
typedef struct
{
    int max, secondMax;
    int min, secondMin;
}Result;

Result merge(Result left, Result right)
{
    Result res;

    if(left.max > right.max)
    {
        res.max = left.max;
        res.secondMax = (left.secondMax > right.max)? left.secondMax: right.max;
    }
    else
    {
        res.max = right.max;
        res.secondMax = (right.secondMax > left.max)? right.secondMax: left.max;
    }


    if(left.min < right.min)
    {
        res.min = left.min;
        res.secondMin = (left.secondMin < right.min)? left.secondMin: right.min;
    }
    else
    {
        res.min = right.min;
        res.secondMin = (right.secondMin < left.min)? right.secondMin: left.min;
    }

    return res;
}

Result secondExtreme(int arr[], int l, int r)
{
    Result res;

    if(l == r)
    {
        res.max = res.min = arr[l];
        res.secondMax = INT_MIN;
        res.secondMin = INT_MAX;
        return res;
    }
    if(r - l == 1)
    {
        if(arr[l] > arr[r])
        {
            res.max = arr[l];
            res.secondMax = arr[r];
            res.min = arr[r];
            res.secondMin = arr[l];
        }
        else
        {
            res.max = arr[r];
            res.secondMax = arr[l];
            res.min = arr[l];
            res.secondMin = arr[r];
        }
        return res;
    }

    int m = l + (r - l) / 2;

    Result left = secondExtreme(arr, l, m);
    Result right = secondExtreme(arr, m+1, r);

    return merge(left, right);
}

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

    Result res = secondExtreme(arr, 0, n-1);

    printf("Second Largest element:%d\n", res.secondMax);
    printf("Second smallest element:%d\n", res.secondMin);
    
    return 0;
}
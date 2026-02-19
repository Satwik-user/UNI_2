#include <stdio.h>

long merge_count(int arr[], int l, int r, int m)
{
    int n1 = m - l + 1;
    int n2 = r - m;

    int L[n1], R[n2];
    for(int i=0; i<n1; i++)
    L[i] = arr[l + i];
    for(int j=0; j<n2; j++)
    R[j] = arr[m + j + 1];

    long inv = 0;
    int i=0, j = 0, k = l;

    while(i < n1 && j < n2)
    {
        if(L[i] < R[j])
        arr[k++] = L[i++];
        else
        {
            arr[k++] = R[j++];
            inv += n1 - i;
        }
    }

    while(i < n1)
    arr[k++] = L[i++];
    while(j < n2)
    arr[k++] = R[j++];

    return inv;
}

long merge_sort_count(int arr[], int l, int r)
{
    long inv = 0;
    if(l < r)
    {
        int mid = l + (r - l) / 2;
        inv += merge_sort_count(arr, l, mid);
        inv += merge_sort_count(arr, mid+1, r);
        
        inv += merge_count(arr, l, r, mid);

        return inv;
    }
}
int main()
{
    int n;
    printf("Enter size of array:");
    scanf("%d", &n);

    int arr[n];
    for(int i=0; i<n; i++)
    {
        printf("Enter element:");
        scanf("%d", &arr[i]);
    }
    
    return 0;
}
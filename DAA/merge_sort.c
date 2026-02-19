#include <stdio.h>
void merge(int arr[], int l, int r, int m)
{
    int i, j, k;
    int n1 = m - l + 1;
    int n2 = r - m;

    int L[n1], R[n2];
    for(int i=0; i<n1; i++)
    L[i] = arr[l + i];
    for(int j=0; j<n2; j++)
    R[j] = arr[m + j + 1];

    i = 0, j = 0, k = l;
    while(i < n1 && j < n2)
    {
        if(L[i] < R[j])
        arr[k++] = L[i++];
        else
        arr[k++] = R[j++];
    }

    while(i < n1)
    arr[k++] = L[i++];

    while(j < n2)
    arr[k++] = R[j++];
}

void merge_sort(int arr[], int l, int r)
{
    if(l < r)
    {
        int mid = l + (r - l) / 2;

        merge_sort(arr, l, mid);
        merge_sort(arr, mid + 1, r);

        merge(arr, l, r, mid);
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

    merge_sort(arr, 0, n - 1);

    printf("Sorted Elements of the array:");
    for(int i=0; i<n; i++)
    printf("%d ", arr[i]);
    printf("\n");
    
    return 0;
}
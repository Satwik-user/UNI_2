import java.util.Scanner;
class Quick_sort
{
    void swap(int arr[], int a, int b)
    {
        int temp = arr[a];
        arr[a] = arr[b];
        arr[b] = temp;
    }

    int partition(int arr[], int l, int h)
    {
        int pivot = arr[l];
        int i = l + 1, j = h;
        while(i < j)
        {
            while(i <= h && arr[i] < pivot)
            i++;

            while(j >= l && arr[j] > pivot)
            j--;

            if(i < j)
            swap(arr, i, j);
        }
        swap(arr, l, j);
        return j;
    }

    void quick
}
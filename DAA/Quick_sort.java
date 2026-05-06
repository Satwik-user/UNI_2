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

    void quickSort(int arr[], int l, int h)
    {
        if(l < h)
        {
            int pivot = partition(arr, l, h);
            quickSort(arr, l, pivot-1);
            quickSort(arr, pivot+1, h);
        }
    }

    public static void main(String args[])
    {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter size of array:");
        int n = sc.nextInt();

        int arr[] = new int[n];
        for(int i=0; i<n; i++)
        {
            System.out.print("Enter element:");
            int arr[i] = sc.nextInt();
        }

        quickSort(arr, 0, n-1);
        
        System.out.print("Sorted List:");
        for(int i=0; i<n; i++)
        System.out.print("")
    }
}
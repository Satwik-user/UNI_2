import java.util.Scanner;
class Merge_sort
{
    void merge(int arr[], int l, int m, int h)
    {
        int n1 = m - l + 1;
        int n2 = h - m;
        int L[] = new int[n1];
        int R[] = new int[n2];

        for(int i=0; i<n1; i++)
        L[i] = arr[l + i];
        for(int i=0; i<n2; i++)
        R[i] = arr[m + i + 1];

        int i = 0, j = 0, k = l;
        while(i < n1 && j < n2)
        {
            if(L[i] < R[j])
            arr[k] = L[i++];

            else
            arr[k] = R[j++];

            k++;
        }

        while(i < n1)
        arr[k++] = L[i++];

        while(j < n2)
        arr[k++] = R[j++];
    }

    void merge_sort(int arr[], int l, int h)
    {
        if(l < h)
        {
            int mid = (l + h) / 2;
            merge_sort(arr, l, mid);
            merge_sort(arr, mid+1, h);
            merge(arr, l, mid, h);
        }
    }

    public static void main(String arge[])
    {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter the size of array:");
        int n = sc.nextInt();

        int arr[] = new int[n];
        for(int i=0; i<n; i++)
        {
            System.out.print("Enter element:");
            arr[i] = sc.nextInt();
        }

        Merge_sort obj = new Merge_sort();
        obj.merge_sort(arr, 0, n-1);

        System.out.println("Sorted Array:");
        for(int i=0; i<n; i++)
        System.out.print(arr[i] + " ");

        System.out.println();
    }
}
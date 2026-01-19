import java.util.Scanner;

class array
{
    public static void main(String args[])
    {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter array size:");
        int n = sc.nextInt();

        int arr[] = new int[n];
        for(int i=0; i<n; i++)
        arr[i] = sc.nextInt();

        System.out.println("Array elements:");
        for(int i=0; i<n; i++)
        System.out.print(arr[i] + );
    }
}
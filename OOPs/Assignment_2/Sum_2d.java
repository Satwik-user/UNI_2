import java.util.Scanner;
class Sum_2d
{
    public static void main(String args[])
    {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter size of rows and columns(Array 1):");
        int n1 = sc.nextInt();
        int m1 = sc.nextInt();

        int arr1[][] = new int[n1][m1];
        System.out.println("Enter array 1 elements:");
        for(int i=0; i<n1; i++)
        {
            for(int j=0; j<m1; j++)
            arr1[i][j] = sc.nextInt();
        }

        System.out.pritnln("Enter size of rows and columns(Array 2):");
        int n2 = sc.nextInt();
        int m2 = sc.nextInt();

        int arr2[][] = new int[n2][m2];
        System.out.println("Enter array 2 elements:");
        for(int i=0; i<n2; i++)
        {
            for(int j=0; j<m2; j++)
            arr2[i][j] = sc.nextInt();
        }

        int sum[]
    }
}
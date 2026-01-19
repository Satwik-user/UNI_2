import java.util.Scanner;
class Sum_2d
{
    public static void main(String args[])
    {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter size of rows and columns:");
        int n1 = sc.nextInt();
        int m1 = sc.nextInt();

        int arr[][] = new int[n1][m1];
        System.out.println("Enter array elements:");
        for(int i=0; i<n1; i++)
        {
            for(int j=0; j<m1; j++)
            arr[i][j] = sc.nextInt();
        }

        System.out.pritnln("Enter size of rows and colums")
    }
}
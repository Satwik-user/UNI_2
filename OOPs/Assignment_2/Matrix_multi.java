import java.util.Scanner;
class Matrix_multi
{
    public static void main(String args[])
    {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter size of rows and columns:");
        int n = sc.nextInt();
        int m = sc.nextInt();

        int arr1[][] = new int[n][m];
        System.out.println("Enter array 1 elements:");
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            arr1[i][j] = sc.nextInt();
        }

        int arr2[][] = new int[n][m];
        System.out.println("Enter array 2 elements:");
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            arr2[i][j] = sc.nextInt();
        }

        int multi[][] = new int[m][n];
        for(int i=0; i<m; i++)
        {
            for(int j=0; j<n; j++)
            {
                multi[i][j] = 
            }
        }
    }
}
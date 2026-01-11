import java.util.Scanner;

class Swap
{
    public static int swap(int a, int b)
    {
        int temp = a;
        a = b;
        b = temp;
    }

    public static void main(String args[])
    {
        Scanner sc = new Scanner(System.in);
        int  = sc.nextInt();
        int n2 = sc.nextInt();

        swap(n1, n2);
        System.out.println("Swapped a and b = " + a + b);
    }
}
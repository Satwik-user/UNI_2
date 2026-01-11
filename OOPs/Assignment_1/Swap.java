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
        int a = sc.nextInt();
        int b = sc.nextInt();

        swap(a, n2);
        System.out.println("Swapped a and b = " + a + b);
    }
}
import java.util.Scanner;

class Swap
{
    public static void swap(int a, int b)
    {
        int temp = a;
        a = b;
        b = temp;
    }

    public static void main(String args[])
    {
        Scanner sc = new Scanner(System.in);
        S
        int a = sc.nextInt();
        int b = sc.nextInt();

        swap(a, b);
        System.out.println("Swapped a and b = " + a + b);
    }
}
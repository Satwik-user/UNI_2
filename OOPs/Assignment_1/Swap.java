import java.util.Scanner;

class Swap
{
    public static void main(String args[])
    {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter two numbers ot swap:");
        int a = sc.nextInt();
        int b = sc.nextInt();

        int temp = a;
        
        System.out.println("Swapped a and b = " + a + b);
    }
}
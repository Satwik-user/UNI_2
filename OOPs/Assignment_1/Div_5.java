import java.util.Scanner;

class Div_5
{
    public static void main(String args[])
    {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter a number:");
        int n = sc.nextInt();

        if(n % 5 == 0)
        System.out.println("Number is divisible ny 5!");
        else
        System.out.println("NUmber is not divisible by 5");
    }
}
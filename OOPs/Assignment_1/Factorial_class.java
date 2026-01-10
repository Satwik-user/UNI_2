class Factorial_main
{
    public int factorial(int n)
    {
        int f = 1;
        for(int i=1; i<=n; i++)
        f *= i;

        return f;
    }
}

class Factorial_class
{
    public static void main(String args[])
    {
        int n = 5;
        int fact = Factorial_main.factorial(n);
        System.out.println("Factorial = " + fact);
    }
}
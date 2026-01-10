class Factorial_method
{
    public static int factorial(int n)
    {
        
        for(int i=1; i<=n; i++)
        f *= i;

        return f;
    }
    
    public static void main(String args[])
    {
        int n = 5;
        int fact = factorial(n);
        System.out.println("Factorial = " + fact);
    }
}
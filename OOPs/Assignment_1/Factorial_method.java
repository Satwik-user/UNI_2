class Factorial_method
{
    public int factorial(int n)
    {
        for(int i=1; i<=n; i++)
        f *= i;

        return f;
    }
    
    public static void main(String args[])
    {
        int n = 5;
        int fact = Factorial_method.factorial(n);
        System.out.println("Factorial = " + fact);
    }
}
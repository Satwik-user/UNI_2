class Factorial_calc
{
    int number;

    Factorial_calc()
    {
        number = 0;
    }

    Factorial_calc(int n)
    {
        number = n;
    }

    int factorial(int n)
    {
        int f = 1;
        for(int i = 1; i <= n; i++)
            f *= i;
        return f;
    }

    void callByValue(int n)
    {
        n = n + 10;
        System.out.println("Inside callByValue: " + n);
    }

    void callByReference(Factorial_calc obj)
    {
        obj.number = obj.number + 10;
        System.out.println("Inside callByReference: " + obj.number);
    }
}

class Factorial_implement
{
    public static void main(String args[])
    {
        Factorial_calc obj1 = new Factorial_calc();
        Factorial_calc obj2 = new Factorial_calc(5);
        
        int result = obj2.factorial(5);
        System.out.println("Factorial: " + result);
        
        int value = 20;
        obj2.callByValue(value);
        System.out.println("Value: " + value);
        
        Factorial_calc obj3 = new Factorial_calc(30);
        obj2.callByReference(obj3);
    }
}
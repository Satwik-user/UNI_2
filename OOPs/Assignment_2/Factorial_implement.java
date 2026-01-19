class Factorial_calc
{
    int number;

    // 7. Default no-argument constructor
    Factorial_calc()
    {
        number = 0;
        System.out.println("Default constructor called");
    }

    // 8. Parameterized constructor
    Factorial_calc(int n)
    {
        number = n;
        System.out.println("Parameterized constructor called with value: " + number);
    }

    // 9. Returning value from method
    int factorial(int n)
    {
        int f = 1;
        for(int i = 1; i <= n; i++)
            f *= i;
        return f;
    }

    // 10. Call by value - passes copy of value
    void callByValue(int n)
    {
        n = n + 10;
        System.out.println("Inside callByValue: n = " + n);
    }

    // 10. Call by reference - passes reference to object
    void callByReference(Factorial_calc obj)
    {
        obj.number = obj.number + 10;
        System.out.println("Inside callByReference: number = " + obj.number);
    }
}

class Factorial_implement
{
    public static void main(String args[])
    {
        System.out.println("=== 7. Default Constructor ===");
        Factorial_calc obj1 = new Factorial_calc();

        System.out.println("\n=== 8. Parameterized Constructor ===");
        Factorial_calc obj2 = new Factorial_calc(5);

        System.out.println("\n=== 9. Returning Value from Method ===");
        int result = obj2.factorial(5);
        System.out.println("Factorial returned: " + result);

        System.out.println("\n=== 10. Call by Value ===");
        int value = 20;
        System.out.println("Before callByValue: value = " + value);
        obj2.callByValue(value);
        System.out.println("After callByValue: value = " + value + " (unchanged)");

        System.out.println("\n=== 10. Call by Reference ===");
        Factorial_calc obj3 = new Factorial_calc(30);
        System.out.println("Before callByReference: number = " + obj3.number);
        obj2.callByReference(obj3);
        System.out.println("After callByReference: number = " + obj3.number + " (changed)");
    }
}
#include <stdio.h>

int rec_fibo(int n)
{
    if(n<=0)
    return 0;
    else if(n==1)
    return 1;
    else
    return rec_fibo(n-1)+rec_fibo(n-2);
}

int tail_fib(int a, int b, int n)
{
    if(n==0)
    return a;
    else if(n==1)
    return b;
    return tail_fib
    (b, a+b, n-1);
}

int main()
{
    int n, a=0, b=1;
    printf("Enter number of term to print in fibonacci sequence:");
    scanf("%d",&n);

    printf("Fibonnaci term with non-tail recursion:%d\n",rec_fibo(n));
    printf("Fibonacci term with tail recursion:%d\n",tail_fibo(a, b, n));
    
    return 0;
}
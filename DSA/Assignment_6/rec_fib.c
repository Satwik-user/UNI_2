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
    printf("%d",a+b);
    return rec_fib(b, a+b, n-1);
}

int main()
{
    int n;
    printf("Enter number of term to print in fibonacci sequence:%d\n");
    
    return 0;
}
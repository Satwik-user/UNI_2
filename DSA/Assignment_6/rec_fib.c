#include <stdio.h>

int rec_fib(int a, int b, int n)
{
    if(n==0)
    return a;
    else if(n==1)
    return b;
    printf("%d",a+b);
    return rec_fib(b, a+b, n-1);
}

int tail_fibo(int n)
{
    if(n<=0)
    return 0;
    else if(n==1)
    return 1;
    
}
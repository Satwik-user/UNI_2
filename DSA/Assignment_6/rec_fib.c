#include <stdio.h>

int rec_fib(int a, int b, int n)
{
    if(n==2)
    return;
    printf("%d",a+b);
    return rec_fib(b, a+b, n-1);
}

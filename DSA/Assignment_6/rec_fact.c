#include <stdio.h>

int fact(int n)
{
    if(n==0)
    return 1;
    else 
    return n*fact(n-1);
}

int tail_fact(int f, int n)
{
    if(n==0)
    return f;
    else
    return tail_fact(n*f, n-1);
}

int main()
{
    int n;
    printf("Enter a number:");
    scanf("%d",&n);

    int f=1;
    printf("Non-tail recursive factorial:%d\n",fact(n));
    printf("Tail recursive factorial:%d\n",tail_fact(f, n));
    
    return 0;
}
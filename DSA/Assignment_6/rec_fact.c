#include <stdio.h>
int rec_fact(int n)
{
    if(n==0)
    return 1;
    else 
    return n*rec_fact(n-1);
}

int tail_rec(int fact, int n)
{
    if(n==0)
    return fact;
    else
    return tail_rec(n*fact, n-1);
}

int main()
{
    int n;
    printf("Enter a number:");
    scanf("%d",&n);

    int fact=1;
    printf("Non-tail recursive factorial:%d\n",rec_fact(n));
    printf("Tail recursive factorial:%d\n",tail_rec(fact, n));
    
    return 0;
}
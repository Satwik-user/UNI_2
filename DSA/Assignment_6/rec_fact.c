#include <stdio.h>
int rec_fact(int n)
{
    if(n==0)
    return 1;
    else 
    return n*rec_fact(n-1);
}

int tail_fact(int fact, int n)
{
    if(n==0)
    return fact;
    else
    return tail_fact(n*fact, n-1);
}

int main()
{
    int n;
    printf("Enter a number:");
    scanf("%d",&n);


    
    return 0;
}
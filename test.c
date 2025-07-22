#include <stdio.h>
#include <math.h>
int main()
{
    int c=0,n,s=0;
    printf("Enter a number:");
    scanf("%d",&n);
    int cpy=n;
    while(n>0)
    {
        n/=10;
        c++;
    }
    n=cpy;
    while(n>0)
    {
        s+=pow(n%10,c);
        n/=10;
    }
    if(s==cpy)
    printf("Armstrong number\n");
    else
    printf("Not a armstrong number\n");
    
    return 0;
}
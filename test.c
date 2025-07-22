#include <stdio.h>
#include <math.h>
int main()
{
    int n,cpy=n,s=0;
    printf("Enter a number:");
    scanf("%d",&n);
    while(n>0)
    {
        s+=pow(n%10,n);
        n/=10;
    }
    if(cpy==s)
    printf("Armstrong numner\n");
    else
    printf("Not a armstrong number\n");
    
    return 0;
}
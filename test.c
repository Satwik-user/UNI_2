#include <stdio.h>
int main()
{
    int n,s=0,cpy=n
    printf("Enter a number:");
    scanf("%d",&n);
    for(int i=1;i<n;i++)
    {
        if(n%i==0)
        s+=i;
    }
    
    return 0;
}
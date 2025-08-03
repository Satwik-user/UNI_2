#include <stdio.h>
int main()
{
    int n,s=0;
    printf("Enter a number:");
    scanf("%d",&n);
    int cpy=n;
    for(int i=1;i<n;i++)
    {
        if(n%i==0)
        s+=i;
    }
    if(cpy==s)
    
    
    return 0;
}
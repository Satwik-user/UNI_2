#include <stdio.h>
int main()
{
    int n,rev
    printf("Enter a number:");
    scanf("%d",&n);
    while(n>0)
    {
        rev=rev*10+(n%10);
    }
    
    return 0;
}
#include <stdio.h>
int main()
{
    int n,rev=0;
    printf("Enter a number:");
    scanf("%d",&n);
    int cpy=n;
    while(n>0)
    {
        rev=rev*10+(n%10);
        n/=10;
    }
    if(rev==cpy)
    printf("Palindrome number:\n");
    else
    printf("Not a palindrome number:\n");
    
    return 0;
}
#include <stdio.h>
int print(int n)
{
    if(n == 0)
    return 0;

    printf("%d", n);
    return print(n-1);
}
int main()
{
    int n;
    printf("Enter a number:");
    scanf("%d", &n);

    printf(print(n));
    
    return 0;
}
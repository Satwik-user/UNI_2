#include <stdio.h>
int print(int n)
{
    int i = 1;
    if(i == n)
    return 0;

    return print(n-1);
}
int main()
{
    int n;
    printf("Enter a number:");
    scanf("%d", &n);

    printf("%d", print(n));
    
    return 0;
}
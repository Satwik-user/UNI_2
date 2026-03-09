#include <stdio.h>
int print(int i, int n)
{
    int i = 1;
    if(i == n)
    return 0;

    printf("%d", i);
    return print(i++, n);
}
int main()
{
    int n;
    printf("Enter a number:");
    scanf("%d", &n);

    int i = 1;
    print(i, n);
    
    return 0;
}
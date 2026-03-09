#include <stdio.h>
int print(int i, int n)
{
    if(i == n + 1)
    return 0;

    printf("%d ", i);
    return print(++i, n);
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
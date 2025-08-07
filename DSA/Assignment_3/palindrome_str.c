#include <stdio.h>
int main()
{
    char str[50];
    printf("Enter a string:");
    fgets(str,sizeof(str),stdin);
    int l=0,h=strlen(str)-1;
    
    return 0;
}
#include <stdio.h>
#include <string.h>
int main()
{
    char str[50];
    printf("Enter a string:");
    fgets(str,sizeof(str),stdin);
    int l=0,h=strlen(str)-1;
    while(l<h)
    {
        char temp=str[l];
        str[l]=str[h];
        str[h]=temp;
    }
    
    return 0;
}
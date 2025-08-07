#include <stdio.h>
#include <string.h>
int main()
{
    char str[50];
    printf("Enetr a string:");
    fgets(str,sizeof(str),stdin);
    int l=0, h=strlen(str);
    while(l<h)
    {
        int temp=str[l];
        str[l]=str[h];
        str[h]=temp;
        
    }
    
    return 0;
}
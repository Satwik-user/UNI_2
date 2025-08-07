#include <stdio.h>
#include <string.h>
int main()
{
    char str[50];
    printf("Enetr a string:");
    fgets(str,sizeof(str),stdin);
    int l=0, h=strlen(str)-1;
    while(l<h)
    {
        char temp=str[l];
        str[l]=str[h];
        str[h]=temp;
        l++;
        h--;
    }
    printf("Reversed string:%s\n",str);
    
    return 0;
}
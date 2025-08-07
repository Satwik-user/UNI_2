#include <stdio.h>
#include <string.h>
int main()
{
    char str[50],rev[50];
    printf("Enter a string:");
    fgets(str,sizeof(str),stdin);
    strcpy(str,rev);
    int l=0,h=strlen(str)-1;
    while(l<h)
    {
        char temp=str[l];
        str[l]=str[h];
        str[h]=temp;
        l++;
        h--;
    }
    if(strcmp(rev,str))
    
    return 0;
}
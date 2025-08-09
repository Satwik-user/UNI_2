#include <stdio.h>
#include <string.h>
int main()
{
    char str[50],rev[50];
    printf("Enter a string:");
    fgets(str,sizeof(str),stdin);
    str[strlen(str) - 1] = '\0';
    strcpy(rev,str);
    int l=0,h=strlen(str)-1;
    while(l<h)
    {
        char temp=str[l];
        str[l]=str[h];
        str[h]=temp;
        l++;
        h--;
    }
    if(strcmp(rev,str)==0)
    printf("Palindrome String\n");
    else
    printf("Not a palindrome string\n");
    
    return 0;
}
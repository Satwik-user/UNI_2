#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    printf("Enter a sentence:");
    fgets(str,sizeof(str),stdin);
    str[strlen(str)-1]='\0';
    
    
    return 0;
}
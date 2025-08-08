#include <stdio.h>
#include <string.h>
int main()
{
    char str[100],temp[101];
    printf("Enter a sentence:");
    fgets(str,sizeof(str),stdin);
    str[strlen(str)-1]='\0';
    temp[0]=' ';
    strcpy(temp+1,str);
    strcpy(str,temp);
    for(int i=0;i<sizeof(str);i++)
    {
        if(str[i]==' ')
        printf("%c ",str[i+1]);
    }
    
    return 0;
}
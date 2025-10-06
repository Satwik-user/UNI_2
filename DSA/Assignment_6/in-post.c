#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int prec(char c)
{
    if(c=='^')
    return 3;
    else if(c=='*' || c=='/')
    return 2;
    else if(c=='+' || c=='-')
    return 1;
    else
    return -1;
}

int isRightAssociative(char c)
{
    return c=='^';
}

char *infixToPostfix(char *exp)
{
    int len=strlen(exp);
    char res[len+1];
    char stack[len];
    int j=0;
    int top=-1;

    for(int i=0;i<len;i++)
    {
        char c=exp[i];

        //operand
        if(isalnum(c))
        res[j++]=c;

        //opening parenthesis
        else if(c=='(')
        stack[++top]=c;

        //closing parentheses
        else if(c==')')
        {
            while(top!=-1 && c!='(')
            res[j++]=stack[top--];
            top--;
        }

        //operator
        else
        {
            while(top!=-1 && stack[top]!='(' && (prec(stack[top])>prec(c) || (prec(stack[top])==prec(c) && !isRightAssociative(c))))
            res[j++]=stack[--top];
            stack[++top]=c;
        }
    }
    while(top!=-1)
    res[j++]=stack[top--];
    res[j]='\0';
    return res;
}

int main()
{
    int n;
    printf("Enter length of expression:");
    scanf("%d",&n);

    char exp[n];
    printf("Enter infix expression:");
    scanf("%s",&exp);

    printf("Converted to postfix expression:%s",infixToPostfix(exp));
    
    return 0;
}
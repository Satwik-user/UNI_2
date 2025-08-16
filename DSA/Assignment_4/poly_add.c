#include <stdio.h>
#include <stdlib.h>
typedef struct Node
{
    int coeff;
    int exp;
    struct Node *next;
}Node;
int main()
{
    int n1,n2;
    printf("Enter number of nodes for 1st and 2nd polynomial:");
    scanf("%d %d",&n1,&n2);
    Node *head=NULL,*head_1=NULL;
    Node *tail=NULL,*tail_1=NULL;
    Node *res=NULL,*res_tail=NULL;
    for(int i=0;i<n1;i++)
    {
        Node *cur=(Node *)malloc(sizeof(Node));
        printf("Enter coefficient and exponent of 1st polynomial:");
        scanf("%d %d",&cur->coeff,&cur->exp);
        cur->next=NULL;
        if(head==NULL)
        {
            head=cur;
            tail=cur;
        }
        else
        {
            tail->next=cur;
            tail=cur;
        }
    }
    printf("\n");
    for(int i=0;i<n2;i++)
    {
        Node *cur=(Node *)malloc(sizeof(Node));
        printf("Enter coefficient and exponent of 2nd polynomial:");
        scanf("%d %d",&cur->coeff,&cur->exp);
        cur->next=NULL;
        if(head_1==NULL)
        {
            head_1=cur;
            tail_1=cur;
        }
        else
        {
            tail_1->next=cur;
            tail_1=cur;
        }
    }

    printf("Original Lists:\n");
    Node *temp=head;
    while(temp)
    {
        printf("Coefficient=%d Exponent=%d\n",temp->coeff,temp->exp);
        temp=temp->next;
    }
    printf("\n");
    
    temp=head_1;
    while(temp)
    {
        printf("Coefficient=%d Exponent=%d\n",temp->coeff,temp->exp);
        temp=temp->next;
    }

    Node *temp_1=head,*temp_2=head_1;
    while(temp_1 && temp_2)
    {
        Node *new_sum=(Node *)malloc(sizeof(Node));
        new_sum->next=NULL;
        if(temp_1->exp==temp_2->exp)
        {
            int sum=temp_1->coeff+temp_2->coeff;
            if(sum!=0)
            {
                new_sum->coeff=sum;
                new_sum->exp=temp_1->exp;

                if(res==NULL)
                {
                    res=new_sum;
                    res_tail=new_sum;
                }
                else
                {
                    res_tail->next=new_sum;
                    res_tail=new_sum;
                }
            }
            else
            {
                free(new_sum);
            }
            temp_1=temp_1->next;
            temp_2=temp_2->next;
        }
        else if(temp_1->exp>temp_2->exp)
        {
            new_sum->coeff=temp_1->coeff;
            new_sum->exp=temp_1->exp;
            if(res==NULL)
            {
                res=new_sum;
                res_tail=new_sum;
            }
            else
            {
                res_tail->next=new_sum;
                res_tail=new_sum;
            }
            temp_1=temp_1->next;
        }
        else
        {
            new_sum->coeff=temp_2->coeff;
            new_sum->exp=temp_2->exp;
            if(res==NULL)
            {
                res=new_sum;
                res_tail=new_sum;
            }
            else
            {
                res_tail->next=new_sum;
                res_tail=new_sum;
            }
            temp_2=temp_2->next;
        }
    }

    while(temp_1)
    {
        Node *new_term=(Node *)malloc(sizeof(Node));
        new_term->coeff=temp_1->coeff;
        new_term->exp=temp_1->exp;
        new_term->next=NULL;
        if(res==NULL)
        {
            res=new_term;
            res_tail=new_term;
        }
        else
        {
            res_tail->next=new_term;
            res_tail=new_term;
        }
        temp_1=temp_1->next;
    }

    while(temp_2)
    {
        Node *new_term=(Node *)malloc(sizeof(Node));
        new_term->coeff=temp_2->coeff;
        new_term->exp=temp_2->exp;
        new_term->next=NULL;
        if(res==NULL)
        {
            res=new_term;
            res_tail=new_term;
        }
        else
        {
            res_tail->next=new_term;
            res_tail=new_term;
        }
        temp_2=temp_2->next;
    }

    printf("Resultant Polynomial:");
    temp=res;
    while(temp)
    {
        printf("%dx%d",temp->coeff,temp->exp);
        temp=temp->next;
        if(temp)
        printf(" + ");
    }
    printf("\n");

    //Free memory
    temp=head;
    while(temp)
    {
        Node *next_node=temp->next;
        free(temp);
        temp=next_node;
    }
    temp=head_1;
    while(temp)
    {
        Node *next_node=temp->next;
        free(temp);
        temp=next_node;
    }
    temp=res;
    while(temp)
    {
        Node *next_node=temp->next;
        free(temp);
        temp=next_node;
    }
    
    return 0;
}
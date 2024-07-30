#include <stdio.h>
#include "Stack.h"
int IsDigit(char c)
{
    return (c>='0' && c<='9');
}
int Precedent(char op1,char op2)
{
    if(op1=='$')
    {
        return 1;
    }
    if((op1=='*') || (op1=='/'))
    {
        return (op2!='$');
    }
    if((op1=='+') || (op1=='-'))
    {
        return ( (op2!='$') && (op2!='*') && (op2!='/') );
    }
    return 0;
}
void InfixToPostfix(char infix[], char postfix[])
{
    int i,j;
    char op,c;
    Stack s;
    CreateStack(&s);
    for(i=0,j=0;(c=infix[i])!='\0';i++)
    {
        if(IsDigit(c))
        {
            postfix[j++]=c;
        }else
        {
            if(IsStackEmpty(&s)){
                StackTop(&op,&s);
                while(IsStackEmpty(&s) && Precedent(op,c))
                {
                    Pop(&op,&s);
                    postfix[j++]=op;
                    if(IsStackEmpty(&s))
                    {
                        StackTop(&op,&s);
                    }
                }
            }
            Push(c,&s);
        }
        while(IsStackEmpty(&s)){
            Pop(&op,&s);
            postfix[j++]=op;
        }
        postfix[j]='\0';
    }

}

int main() {
   char infix[]="1+2*3$4/5+6";
   char postfix [80];
    InfixToPostfix(infix,postfix);
    printf("\n %s",postfix);
  
    return 0;
}

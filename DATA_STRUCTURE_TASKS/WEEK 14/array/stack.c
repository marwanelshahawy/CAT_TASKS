/**
********************************************************************************
* @file         : stack.c
* @author       : Marwan El-Shahawy
* @brief        : stack array
********************************************************************************
*/

#include <stdio.h>
#include "stack.h"

void CreateStack(Stack *ps) //accessing mechanism (1)
{
    ps->top=0;
}
void Push(StackEntry e , Stack *ps) //accessing mechanism (2)
{
    ps->entry[ps->top++]=e;
}
int IsStackFull(Stack *ps) //accessing mechanism (3)
{
    if(ps->top==MAXSIZE)
    {
        return 0;
    }else{
       return 1;
    }
}
void Pop(StackEntry *pe , Stack *ps) //accessing mechanism (4)
{
   *pe=ps->entry[--ps->top];
}
int IsStackEmpty(Stack *ps) //accessing mechanism (5)
{
    if(ps->top==0){
        return 0;
    }else{
        return 1;
    }
}
void StackTop(StackEntry *pe,Stack *ps) //accessing mechanism (6)
{
    *pe=ps->entry[ps->top-1];
}
int StackSize(Stack *ps) //accessing mechanism (7)
{
    return ps->top;
}
void ClearStack(Stack *ps) //accessing mechanism (8)
{
    ps->top=0;
}
void TraverseStack(Stack *ps,void (*pf) (StackEntry)) //accessing mechanism (9)
{
    for(int i=ps->top;i>0;i--)
    {
        (*pf)(ps->entry[i-1]);
    }
}

/**
********************************************************************************
User                Date                Brief
********************************************************************************
Marwan El-shahawy   4 Jul 2024
*/

/**
********************************************************************************
* @file         : Stack.c
* @author       : Marwan El-Shahawy
* @brief        : Stack_implementation
********************************************************************************
*/

#include "Stack.h"
#include <stdio.h>
#include <stdlib.h>

/******************************Start Array Stack*************************/
#ifdef LIMITED_MEMORY
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
/******************************End Array Stack*************************/
#else
/******************************Start Linked STACK**********************/
void CreateStack(Stack *ps) //accessing mechanism (1)
{
    ps->top=NULL;
    ps->size=0;
}
void Push(StackEntry e, Stack *ps) //accessing mechanism (2)
{
    StackNode *pn=(StackNode *) malloc(sizeof(StackNode));
    pn->entry=e;
    pn->next=ps->top;
    ps->top=pn;
    ps->size++;
}
void Pop(StackEntry *pe,Stack *ps) //accessing mechanism (3)
{
    *pe=ps->top->entry;
    ps->size--;
    StackNode *pn;
    pn=ps->top;
    ps->top=ps->top->next;
    free(pn);
}
int StackEmpty(Stack *ps) //accessing mechanism (4)
{
    return ps->top==NULL;
}
int StackFull(Stack *ps) //accessing mechanism (5)
{
    return 0;
}
void ClearStack(Stack *ps) //accessing mechanism (6)
{
    StackNode *pn=ps->top;
    StackNode *qn=ps->top;
    while (pn)
    {
        pn=pn->next;
        free(qn);
        qn=pn;
    }
    ps->top=NULL;
    ps->size=0;
}
void TraverseStack(Stack *ps,void(*pf)(StackEntry)) //accessing mechanism (7)
{
    StackNode *pn=ps->top;
    while(pn)
    {
        (*pf)(pn->entry);
        pn=pn->next;
    }
}
int StackSize(Stack *ps) //accessing mechanism (8)
{
    return ps->size;
}
/******************************End Linked Stack**********************/

#endif


/**
********************************************************************************
User                Date                Brief
********************************************************************************
Marwan El-shahawy   30 Jul 2024
*/

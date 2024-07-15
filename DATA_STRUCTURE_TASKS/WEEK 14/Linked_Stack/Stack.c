/**
********************************************************************************
* @file         : stack.c
* @author       : Marwan El-Shahawy
* @brief        : linked based implementation
********************************************************************************
*/

#include <stdlib.h>
#include "Stack.h"
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
/**
********************************************************************************
User                Date                Brief
********************************************************************************
Marwan El-shahawy   11 Jul 2024
*/

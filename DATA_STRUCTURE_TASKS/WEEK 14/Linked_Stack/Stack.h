/**
********************************************************************************
* @file         : stack.h
* @author       : Marwan El-Shahawy
* @brief        : prototype of functions.
********************************************************************************
*/


#ifndef LINKED_STACK_STACK_H
#define LINKED_STACK_STACK_H
typedef int StackEntry ;
typedef struct stacknode{
    StackEntry entry;
    struct stacknode *next;
}StackNode;

typedef struct stack{
    StackNode *top;
    int size;
}Stack;

void CreateStack(Stack *ps);//accessing mechanism (1)
void Push(StackEntry e, Stack *ps); //accessing mechanism (2)
void Pop(StackEntry *pe,Stack *ps); //accessing mechanism (3)
int StackEmpty(Stack *ps); //accessing mechanism (4)
int StackFull(Stack *ps); //accessing mechanism (5)
void ClearStack(Stack *ps); //accessing mechanism (6)
void TraverseStack(Stack *ps,void(*pf)(StackEntry)); //accessing mechanism (7)
int StackSize(Stack *ps); //accessing mechanism (8)

#endif //LINKED_STACK_STACK_H
/**
********************************************************************************
User                Date                Brief
********************************************************************************
Marwan El-shahawy   11 Jul 2024
*/

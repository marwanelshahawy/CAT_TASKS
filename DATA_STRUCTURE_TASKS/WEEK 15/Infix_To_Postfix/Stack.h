/**
********************************************************************************
* @file         : Stack.h
* @author       : Marwan El-Shahawy
* @brief        : Stack_Declaration
********************************************************************************
*/

#ifndef GLOBAL_STACK_H
#define GLOBAL_STACK_H
#define LIMITED_MEMORY
#define MAXSIZE 100
typedef int StackEntry;

/******************************Start Array Stack*************************/
#ifdef LIMITED_MEMORY
typedef struct Stack{
    StackEntry entry[MAXSIZE];
    int top;
}Stack;

void CreateStack(Stack *ps); //accessing mechanism (1)
void Push(StackEntry e , Stack *ps); //accessing mechanism (2)
int IsStackFull(Stack *ps); //accessing mechanism (3)
void Pop(StackEntry *pe , Stack *ps); //accessing mechanism (4)
int IsStackEmpty(Stack *ps); //accessing mechanism (5)
void StackTop(StackEntry *pe,Stack *ps); //accessing mechanism (6)
int StackSize(Stack *ps); //accessing mechanism (7)
void ClearStack(Stack *ps); //accessing mechanism (8)
void TraverseStack(Stack *ps,void (*pf) (StackEntry)); //accessing mechanism (9)
/******************************End Array Stack*************************/
#else
/******************************Start Linked Stack**********************/

typedef struct stacknode{
    StackEntry entry;
    struct stacknode *next;
}StackNode;

typedef struct stack{
    struct stacknode *top;
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
/******************************End Linked Stack**********************/
#endif //GLOBAL_STACK_H


#endif //GLOBAL_STACK_H


/**
********************************************************************************
User                Date                Brief
********************************************************************************
Marwan El-shahawy   30 Jul 2024
*/
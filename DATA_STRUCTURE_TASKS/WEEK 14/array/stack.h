/**
********************************************************************************
* @file         : stack.h
* @author       : Marwan El-Shahawy
* @brief        : stack array
********************************************************************************
*/

#ifndef ARRAY_STACK_H
#define ARRAY_STACK_H

#define MAXSIZE 100
typedef int StackEntry;
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

#endif //ARRAY_STACK_H
/**
********************************************************************************
User                Date                Brief
********************************************************************************
Marwan El-shahawy   4 Jul 2024
*/

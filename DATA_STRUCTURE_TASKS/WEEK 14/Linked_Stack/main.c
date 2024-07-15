/**
********************************************************************************
* @file         : main.c
* @author       : Marwan El-Shahawy
* @brief        : main program
********************************************************************************
*/

#include <stdio.h>
#include "Stack.h"
void Display(StackEntry e)
{
    printf("e=%d\n",e);
}
int main() {
    Stack s;
    CreateStack(&s);
    Push(5,&s);
    Push(4,&s);
    Push(7,&s);
    Push(33,&s);
    Push(47,&s);
    //Push(6,&s);
    int x= StackSize(&s);
    printf("size= %d\n",x);
    int y;
    Pop(&y,&s);
    printf("e=%d\n",y);
    x= StackSize(&s);
    printf("size= %d\n",x);
    //ClearStack(&s);
    x= StackSize(&s);
    printf("size= %d\n",x);
//    if(!StackEmpty(&s))
//    {
//        Pop(&y,&s);
//    }else
//    {
//        printf("Stack is Empty\n");
//    }
//
//    printf("e=%d\n",y);
    TraverseStack(&s,&Display);
    return 0;
}
/**
********************************************************************************
User                Date                Brief
********************************************************************************
Marwan El-shahawy   11 Jul 2024
*/

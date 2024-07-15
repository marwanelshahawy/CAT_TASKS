/**
********************************************************************************
* @file         : main.c
* @author       : Marwan El-Shahawy
* @brief        : main function
********************************************************************************
*/

#include <stdio.h>
#include "Stack.h"

void Display(StackEntry e)
{
    printf("e = %d\n",e);
}
int main() {
    Stack s;
    CreateStack(&s);
    Push(5,&s);
    Push(4,&s);
    Push(9,&s);
    Push(7,&s);
   TraverseStack(&s,&Display);
    int y= StackSize(&s);
    printf("size = %d\n",y);
    ClearStack(&s);
    TraverseStack(&s,&Display);


    return 0;
}
/**
********************************************************************************
User                Date                Brief
********************************************************************************
Marwan El-shahawy   4 Jul 2024
*/


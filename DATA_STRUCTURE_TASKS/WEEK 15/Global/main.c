/**
********************************************************************************
* @file         : main.h
* @author       : Marwan El-Shahawy
* @brief        : main_function
********************************************************************************
*/

#include <stdio.h>
#include "Global.h"
#include "Stack.h"
#include "Queue.h"
void Display(ElementType e)
{
    printf("e=%d\n",e);
}
int main() {
Stack s;
Queue q;
    CreateStack(&s);
    CreateQueue(&q);
    if(IsStackFull(&s))
    {
        Push(6,&s);
        Push(4,&s);
        Push(7,&s);
        Push(12,&s);
        Push(24,&s);
        Push(15,&s);
    }
    printf("******************STACK*****************\n");

    TraverseStack(&s,&Display);
    int y;
    if(IsStackEmpty(&s))
    {
        Pop(&y,&s);

    }
    printf("y=%d\n",y);
    int sizeStack= StackSize(&s);
    printf("size=%d\n",sizeStack);
    printf("******************QUEUE*****************\n");
    if(!QueueFull(&q))
    {
        Append(5,&q);
        Append(4,&q);
        Append(77,&q);
        Append(45,&q);
        Append(66,&q);
        Append(18,&q);
    }
    TraverseQueue(&q,&Display);
    int z;
    if(!QueueEmpty(&q))
    {
        Serve(&z,&q);
    }
    printf("z=%d\n",z);
    int sizeQueue= QueueSize(&q);
    printf("size=%d\n",sizeQueue);
    return 0;
}

/**
********************************************************************************
User                Date                Brief
********************************************************************************
Marwan El-shahawy   30 Jul 2024
*/
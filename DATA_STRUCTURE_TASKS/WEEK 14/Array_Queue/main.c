/**
********************************************************************************
* @file         : main.c
* @author       : Marwan El-Shahawy
* @brief        : queue_array_based_implementation
********************************************************************************
*/
#include <stdio.h>
#include "Queue.h"

void Display(QueueEntry e)
{
    printf("e = %d\n",e);
}
int main() {
    Queue q;
    CreateQueue(&q);
    Append(6,&q);
    Append(4,&q);
    Append(7,&q);
    Append(2,&q);
    TraverseQueue(&q,&Display);
    return 0;
}




/**
********************************************************************************
User                Date                Brief
********************************************************************************
Marwan El-shahawy   18 Jul 2024
*/

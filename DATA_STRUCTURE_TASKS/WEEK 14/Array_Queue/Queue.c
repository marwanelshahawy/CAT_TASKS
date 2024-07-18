/**
********************************************************************************
* @file         : Queue.c
* @author       : Marwan El-Shahawy
* @brief        : queue_array_based_implementation
********************************************************************************
*/
#include <stdio.h>
#include "Queue.h"
void CreateQueue(Queue *pq) //accessing mechanism (1)
{
    pq->front=0;
    pq->rear=-1;
    pq->size=0;
}
void Append(QueueEntry e,Queue *pq) //accessing mechanism (2)
{
    pq->rear=(pq->rear+1)%MAXQUEUE;
    pq->entry[pq->rear]=e;
    pq->size++;
}
void Serve(QueueEntry *pe,Queue *pq) //accessing mechanism (3)
{
    *pe=pq->entry[pq->front];
    pq->front=(pq->front+1)%MAXQUEUE;
    pq->size--;
}
int QueueEmpty(Queue *pq) //accessing mechanism (4)
{
    return !pq->size;
}
int QueueFull(Queue *pq) //accessing mechanism (5)
{
    return (pq->size==MAXQUEUE);
}
int QueueSize(Queue *pq) //accessing mechanism (6)
{
    return pq->size;
}
void ClearQueue(Queue *pq) //accessing mechanism (7)
{
    pq->front=0;
    pq->rear=-1;
    pq->size=0;
}
void TraverseQueue(Queue *pq,void(*pf)(QueueEntry)) //accessing mechanism (8)
{
    int pos,s;
    for(pos=pq->front,s=0;s<pq->size;s++)
    {
        (*pf)(pq->entry[pos]);
        pos=(pos+1)%MAXQUEUE;
    }
}



/**
********************************************************************************
User                Date                Brief
********************************************************************************
Marwan El-shahawy   18 Jul 2024
*/

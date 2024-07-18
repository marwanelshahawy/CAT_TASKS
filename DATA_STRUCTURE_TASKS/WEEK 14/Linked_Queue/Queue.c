/**
********************************************************************************
* @file         : Queue.c
* @author       : Marwan El-Shahawy
* @brief        : queue_linked_based_implementation
********************************************************************************
*/
#include <stdio.h>
#include <stdlib.h>
#include "Queue.h"
void CreateQueue(Queue *pq) //accessing mechanism (1)
{
    pq->front=NULL;
    pq->rear=NULL;
    pq->size=0;
}
void Append(QueueEntry e,Queue *pq) //accessing mechanism (2)
{
    QueueNode *pn=(QueueNode*) malloc(sizeof(QueueNode));
    pn->next=NULL;
    pn->entry=e;
    if(!pq->rear)
    {
        pq->front=pn;
    }else
    {
        pq->rear->next=pn;
    }
    pq->rear=pn;
    pq->size++;
}
void Serve(QueueEntry *pe,Queue *pq) //accessing mechanism (3)
{
   QueueNode *pn=pq->front;
   *pe=pn->entry;
   pq->front=pn->next;
   free(pn);
   if(!pq->front)
   {
       pq->rear=NULL;
   }
   pq->size--;
}
int QueueEmpty(Queue *pq) //accessing mechanism (4)
{
    return !pq->front;
}
int QueueFull(Queue *pq) //accessing mechanism (5)
{
    return 0;
}
int QueueSize(Queue *pq) //accessing mechanism (6)
{
    return pq->size;
}
void ClearQueue(Queue *pq) //accessing mechanism (7)
{
   while(pq->front)
   {
       pq->rear=pq->front->next;
       free(pq->front);
       pq->front=pq->rear;
   }
   pq->size=0;
   pq->front=NULL;
   pq->rear=NULL;
}
void TraverseQueue(Queue *pq,void(*pf)(QueueEntry)) //accessing mechanism (8)
{
    for(QueueNode *pn=pq->front;pn;pn=pn->next)
    {
        (*pf)(pn->entry);
    }
}

/**
********************************************************************************
User                Date                Brief
********************************************************************************
Marwan El-shahawy   18 Jul 2024
*/

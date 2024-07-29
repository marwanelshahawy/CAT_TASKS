/**
********************************************************************************
* @file         : Queue.c
* @author       : Marwan El-Shahawy
* @brief        : queue_implementation
********************************************************************************
*/

#include "Queue.h"
#include <stdio.h>
#include <stdlib.h>

/******************************Start Array Queue*************************/
#ifdef LIMITED_MEMORY
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
/******************************End Array Queue*************************/
#else
/******************************Start Linked Queue**********************/
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
/******************************End Linked Queue**********************/

#endif


/**
********************************************************************************
User                Date                Brief
********************************************************************************
Marwan El-shahawy   30 Jul 2024
*/

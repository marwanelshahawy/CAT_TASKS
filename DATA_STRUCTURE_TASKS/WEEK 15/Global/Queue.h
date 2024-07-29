/**
********************************************************************************
* @file         : Queue.h
* @author       : Marwan El-Shahawy
* @brief        : queue_Declaration
********************************************************************************
*/

#ifndef GLOBAL_QUEUE_H
#define GLOBAL_QUEUE_H
#include "Global.h"
#define LIMITED_MEMORY

/******************************Start Array Queue*************************/
#ifdef LIMITED_MEMORY
typedef struct queue{
    int front;
    int rear;
    int size;
    QueueEntry entry[MAXQUEUE];

}Queue;

void CreateQueue(Queue *pq); //accessing mechanism (1)
void Append(QueueEntry e,Queue *pq); //accessing mechanism (2)
void Serve(QueueEntry *pe,Queue *pq); //accessing mechanism (3)
int QueueEmpty(Queue *pq); //accessing mechanism (4)
int QueueFull(Queue *pq); //accessing mechanism (5)
int QueueSize(Queue *pq); //accessing mechanism (6)
void ClearQueue(Queue *pq);//accessing mechanism (7)
void TraverseQueue(Queue *pq,void(*pf)(QueueEntry)); //accessing mechanism (8)
/******************************End Array Queue*************************/
#else
/******************************Start Linked Queue**********************/
typedef struct queuenode{
    QueueEntry entry;
    struct queuenode *next;
}QueueNode;

typedef struct queue{
    QueueNode *front;
    QueueNode *rear;
    int size;
}Queue;

void CreateQueue(Queue *pq); //accessing mechanism (1)
void Append(QueueEntry e,Queue *pq); //accessing mechanism (2)
void Serve(QueueEntry *pe,Queue *pq); //accessing mechanism (3)
int QueueEmpty(Queue *pq); //accessing mechanism (4)
int QueueFull(Queue *pq); //accessing mechanism (5)
int QueueSize(Queue *pq); //accessing mechanism (6)
void ClearQueue(Queue *pq);//accessing mechanism (7)
void TraverseQueue(Queue *pq,void(*pf)(QueueEntry)); //accessing mechanism (8)

/******************************End Linked Queue**********************/

#endif //GLOBAL_QUEUE_H

#endif //GLOBAL_QUEUE_H

/**
********************************************************************************
User                Date                Brief
********************************************************************************
Marwan El-shahawy   30 Jul 2024
*/
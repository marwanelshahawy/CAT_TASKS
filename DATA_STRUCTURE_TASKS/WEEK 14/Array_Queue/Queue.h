/**
********************************************************************************
* @file         : Queue.h
* @author       : Marwan El-Shahawy
* @brief        : queue_array_based_implementation
********************************************************************************
*/
#ifndef ARRAY_QUEUE_QUEUE_H
#define ARRAY_QUEUE_QUEUE_H
#define MAXQUEUE 100
typedef int QueueEntry;
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

#endif //ARRAY_QUEUE_QUEUE_H
/**
********************************************************************************
User                Date                Brief
********************************************************************************
Marwan El-shahawy   18 Jul 2024
*/

#pragma once
#include<stdio.h>
#include<assert.h>
#include<stdbool.h>
#include<stdlib.h>
typedef int QDateType;

struct QueueNode
{
	QDateType date;
	struct QueueNode* next;
};
typedef struct QueueNode QueueNode;

typedef struct Queue
{
	QueueNode* head;
	QueueNode* tail;
}Queue;


void QueueInit(Queue* pq);
void QueueDestory(Queue* pq);
void QueuePush(Queue* pq,QDateType x);
void QueuePop(Queue* pq);
QDateType QueueFront (Queue* pq);//ȡ��ͷ������
QDateType QueueBack(Queue* pq);//ȡ��β������
bool QueueEmpty(Queue* pq);
int QueueSize(Queue* pq);
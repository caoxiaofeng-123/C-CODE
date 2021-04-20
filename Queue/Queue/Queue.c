#include"Queue.h"

void QueueInit(Queue* pq)
{
	assert(pq);
	pq->head = pq->tail = NULL;
}

void QueueDestory(Queue* pq)
{
	assert(pq);
	//pq->head = pq->tail = NULL;
	QueueNode* cur = pq->head;
	while (cur)
	{
		QueueNode* next = cur->next;
		free(cur);
		cur = next;
	}
	pq->head = pq->tail = NULL;
}
void QueuePush(Queue* pq, QDateType x)
{
	assert(pq);
	QueueNode* newnode = (QueueNode*)malloc(sizeof(QueueNode));
	if (newnode == NULL)
	{
		printf("malloc fail\n");
		exit(-1);
	}
	newnode->date = x;
	newnode->next = NULL;
	if (pq->tail == NULL)
	{
		pq->head = pq->tail = newnode;
	}
	else
	{
		pq->tail->next = newnode;
		pq->tail = newnode;
	}
}
void QueuePop(Queue* pq)
{
	assert(pq);
	assert(!QueueEmpty(pq));
	if (pq->head->next == NULL)
	{
		free(pq->head);
		pq->head = pq->tail;
	}
	else
	{
		QueueNode* next = pq->head->next;
		free(pq->head);
		pq->head = next;
	}
}
QDateType QueueFront(Queue* pq)
{
	assert(pq);
	assert(!QueueEmpty(pq));
	QDateType val = 0;
	val = pq->head->date;
	return val;
}
QDateType QueueBack(Queue* pq)
{
	assert(pq);
	assert(!QueueEmpty(pq));
	return pq->tail->date;
}
bool QueueEmpty(Queue* pq)
{
	assert(pq);
	return pq->head == NULL;//head是空就是真，返回1，如果不是空就是假，返回0
}
int QueueSize(Queue* pq)
{
	assert(pq);
	assert(!QueueEmpty(pq));
	QueueNode* cur = pq->head;
	QueueNode* next = cur->next;
	QDateType count = 0;
	while (cur)
	{
		cur = next;
		next = cur->next;
		++count;
	}
	return count;
}
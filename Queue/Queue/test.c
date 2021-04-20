#include"Queue.h"
void TestQueue()
{
	Queue q;
	QueueInit(&q);
	QueuePush(&q, 1);
	QueuePush(&q, 2);
	QueuePop(&q);
	QueuePush(&q, 3);
	QueuePush(&q, 4);
	while (!QueueEmpty(&q))
	{
		printf("%d   ", QueueFront(&q));
		QueuePop(&q);
	}
	QueueDestory(&q);
}
int main()
{
	TestQueue();
	return 0;
}
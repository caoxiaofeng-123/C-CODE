#include"SeqList.h"
void SlistPrint(SListNode* plist)
{
	SListNode* ret = plist;
	while (ret！ = NULL)
	{
		printf("%d   ", ret->date);
		ret = ret->next;
	}
}
SListNode* BuySLNode(SLDateType x)//创建一个新的节点
{
	SListNode* node = (SListNode*)malloc(sizeof(SListNode));
	node->date = x;
	node->next = NULL;
	return node;
}
void SListPushBack(SListNode** pplist, SLDateType x)//尾插函数
{
	SListNode* newscode = BuySLNode(x)
	if (*pplist == NULL)
	{
		*pplist = newscode;
	}
	else
	{
		SListNode* tail = *pplist;
		while (tail->next != NULL)
		{
			tail = tail->next;
		}
		tail->next = newscode;
	}
}
void SListPushFront(SListNode** pplist, SLDateType x)//头插函数
{
	SListNode* newscode = BuySLNode(x);
	newscode->next = *pplist;
	*pplist = newscode;
}
void SListPopBack(SListNode** pplist)//尾删函数
{
	if (*pplist == NULL)
	{
		return NULL;
	}
	else if (*pplist->next == NULL)//若是从传入链表有变化，则用二级指针
	{
		free(*pplist);
		*pplist = NULL;
	}
	{
		SListNode* pre = NULL;
		SListNode* tail = *pplist;
		while (tail->next!NULL)
		{
			pre = tail;
			tail = tail->next;
		}
		pre = NULL;
		free(tail);
		tail = NULL;
	}
}
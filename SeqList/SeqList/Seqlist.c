#include"SeqList.h"
void SlistPrint(SListNode* plist)
{
	SListNode* ret = plist;
	while (ret�� = NULL)
	{
		printf("%d   ", ret->date);
		ret = ret->next;
	}
}
SListNode* BuySLNode(SLDateType x)//����һ���µĽڵ�
{
	SListNode* node = (SListNode*)malloc(sizeof(SListNode));
	node->date = x;
	node->next = NULL;
	return node;
}
void SListPushBack(SListNode** pplist, SLDateType x)//β�庯��
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
void SListPushFront(SListNode** pplist, SLDateType x)//ͷ�庯��
{
	SListNode* newscode = BuySLNode(x);
	newscode->next = *pplist;
	*pplist = newscode;
}
void SListPopBack(SListNode** pplist)//βɾ����
{
	if (*pplist == NULL)
	{
		return NULL;
	}
	else if (*pplist->next == NULL)//���ǴӴ��������б仯�����ö���ָ��
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
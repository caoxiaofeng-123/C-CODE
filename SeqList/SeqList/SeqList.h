#pragma once
typedef int SLDateType;
typedef struct SListNode
{
	SLDateType date;
	struct SListNode* next;
}SListNode;
//����+����ͷ+��ѭ��
void SlistPrint(SListNode* plist);
void SListPushBack(SListNode* plist, SLDateType x);//β��
void SListPushFront(SListNode* plist, SLDateType x);//ͷ��
void SListPopBack(SListNode* plist, );//βɾ
void SListPopFront(SListNode* plist, );//ͷɾ
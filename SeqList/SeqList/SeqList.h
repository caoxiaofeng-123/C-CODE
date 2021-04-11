#pragma once
typedef int SLDateType;
typedef struct SListNode
{
	SLDateType date;
	struct SListNode* next;
}SListNode;
//单项+不带头+不循环
void SlistPrint(SListNode* plist);
void SListPushBack(SListNode* plist, SLDateType x);//尾插
void SListPushFront(SListNode* plist, SLDateType x);//头插
void SListPopBack(SListNode* plist, );//尾删
void SListPopFront(SListNode* plist, );//头删
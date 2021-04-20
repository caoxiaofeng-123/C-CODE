#include"Stack.h"
#pragma once
void StackInit(Stack* pst)
{
	assert(pst);
	pst->a = (STDateType*)malloc(sizeof(STDateType)*4);
	pst->top = 0;
	pst->capacity = 4;
}

void StackDestory(Stack* pst)
{
	assert(pst);
	pst->a = 0;
	pst->capacity = 0;
	free(pst->a);
	pst->a = NULL;
}

void StackPush(Stack* pst, STDateType x)//ջ����������
{
	assert(pst);
	if (pst->top >= pst->capacity)
	{
		STDateType* new = (STDateType*)realloc(pst->a,sizeof(STDateType) *pst->capacity*2);
		if (new == NULL)
		{
			printf("realloc fail\n");
			exit(-1);//��ʾ�쳣�˳���������������
		}//�жϿ��ٿռ��Ƿ�ɹ�
		pst->a = new;
		pst->capacity = pst->capacity * 2;
	}
	pst->a[pst->top] = x;
	pst->top++;
}

void StackPop(Stack* pst)
{
	assert(pst);
	assert(!StackEmpty(pst));//������������Ƿǿ�
	pst->top--;
	}

STDateType StackTop(Stack* pst)//ȡջ��������
{
	assert(pst);
	assert(!StackEmpty(pst));
	STDateType x = pst->a[pst->top - 1];
	return x;
}

bool StackEmpty(Stack* pst)
{
	assert(pst);

	return pst->top == 0;//�ж������Ƿ�Ϊ�գ�����ǿգ��ͷ���0��
}

int StackSize(Stack* pst)
{
	assert(pst);

	return pst->top;
}
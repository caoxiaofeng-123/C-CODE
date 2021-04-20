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

void StackPush(Stack* pst, STDateType x)//栈顶插入数据
{
	assert(pst);
	if (pst->top >= pst->capacity)
	{
		STDateType* new = (STDateType*)realloc(pst->a,sizeof(STDateType) *pst->capacity*2);
		if (new == NULL)
		{
			printf("realloc fail\n");
			exit(-1);//表示异常退出，结束整个程序
		}//判断开辟空间是否成功
		pst->a = new;
		pst->capacity = pst->capacity * 2;
	}
	pst->a[pst->top] = x;
	pst->top++;
}

void StackPop(Stack* pst)
{
	assert(pst);
	assert(!StackEmpty(pst));//考虑这个数组是非空
	pst->top--;
	}

STDateType StackTop(Stack* pst)//取栈顶的数据
{
	assert(pst);
	assert(!StackEmpty(pst));
	STDateType x = pst->a[pst->top - 1];
	return x;
}

bool StackEmpty(Stack* pst)
{
	assert(pst);

	return pst->top == 0;//判断数组是否为空，如果是空，就返回0；
}

int StackSize(Stack* pst)
{
	assert(pst);

	return pst->top;
}
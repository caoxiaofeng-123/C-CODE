#pragma once
#include<stdbool.h>
#include<stdio.h>
#include<assert.h>
#include<stdlib.h>
typedef int STDateType;
struct Stack
{
	STDateType* a;//����һ����̬������
	int top;//ջ��
	int capacity;//ջ����������������
};
typedef struct Stack Stack;

void StackInit(Stack* pst);

void StackDestory(Stack* pst);

void StackPush(Stack* pst, STDateType x);
void StackPop(Stack* pst);

STDateType StackTop(Stack* pst);

bool StackEmpty(Stack* pst);
int StackSize(Stack* pst);




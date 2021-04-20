#pragma once
#include<stdbool.h>
#include<stdio.h>
#include<assert.h>
#include<stdlib.h>
typedef int STDateType;
struct Stack
{
	STDateType* a;//定义一个动态的数组
	int top;//栈顶
	int capacity;//栈的容量，方便增容
};
typedef struct Stack Stack;

void StackInit(Stack* pst);

void StackDestory(Stack* pst);

void StackPush(Stack* pst, STDateType x);
void StackPop(Stack* pst);

STDateType StackTop(Stack* pst);

bool StackEmpty(Stack* pst);
int StackSize(Stack* pst);




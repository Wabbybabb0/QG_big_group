#include"head.h"

//操作符入栈
void oper_push(char oper)
{
	oper_top++;
	oper_stack[oper_top] = oper;
	return;
}

//数字入栈
void data_push(int data)
{
	data_top++;
	data_stack[data_top] = data;
	return;
}
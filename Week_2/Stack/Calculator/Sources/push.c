#include"head.h"

//��������ջ
void oper_push(char oper)
{
	oper_top++;
	oper_stack[oper_top] = oper;
	return;
}

//������ջ
void data_push(int data)
{
	data_top++;
	data_stack[data_top] = data;
	return;
}
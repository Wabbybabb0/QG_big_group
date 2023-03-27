#ifndef _LINKEDSTACK_H_
#define _LINKEDSTACK_H_

#include<stdio.h>
#include<malloc.h>
#include<stdbool.h>

typedef int ElemType;

typedef struct StackNode {
	ElemType data;
	struct StackNode* pNext;
}StackNode, *pStackNode;

typedef struct LinkStack {
	pStackNode pTop;
	int count;
}LinkStack, *pLinkStack;

//Ŀ¼
void menu();

//��ʼ��
pLinkStack init_stack();

//�ж�ջ�Ƿ�Ϊ��
bool is_empty(pLinkStack pS);

//�õ�ջ��Ԫ��
bool get_top_node(pLinkStack pS, int* data);

//���ջ
pLinkStack clear_stack(pLinkStack pS);

//����ջ
pLinkStack destroy_stack(pLinkStack pS);

//���ջ����
void get_stack_length(pLinkStack pS, int* length);

//��ջ
pLinkStack push(pLinkStack pS);

//��ջ
pLinkStack pop(pLinkStack pS);

//�ж����������Ƿ�ΪInt
bool is_false_type(int* val);

#endif 

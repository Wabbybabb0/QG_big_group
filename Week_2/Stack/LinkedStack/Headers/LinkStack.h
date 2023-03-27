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

//目录
void menu();

//初始化
pLinkStack init_stack();

//判断栈是否为空
bool is_empty(pLinkStack pS);

//得到栈顶元素
bool get_top_node(pLinkStack pS, int* data);

//清空栈
pLinkStack clear_stack(pLinkStack pS);

//销毁栈
pLinkStack destroy_stack(pLinkStack pS);

//检测栈长度
void get_stack_length(pLinkStack pS, int* length);

//入栈
pLinkStack push(pLinkStack pS);

//出栈
pLinkStack pop(pLinkStack pS);

//判断输入类型是否为Int
bool is_false_type(int* val);

#endif 

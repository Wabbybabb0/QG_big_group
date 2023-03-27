#ifndef _LQUEUE_H_
#define _LQUEUE_H_

#include<stdio.h>
#include<malloc.h>
#include<stdbool.h>

typedef struct Node {
	void* data;
	struct Node* pNext;
}Node, *pNode;

typedef struct LQqueue
{
    Node* pFront;                
    Node* pRear;     
    int type;
    size_t length;        
}LQueue, *pLQueue;

//检查输入的是否为正确的数据类型
bool is_false_type_int(int* val);
bool is_false_type_float(float* val);


//目录
void menu();

//初始化队列
pLQueue init_queue();

//查看队列是否为空
bool is_empty(pLQueue pLQ);

//销毁队列
void destroy_queue(pLQueue pLQ);

//清空队列
pLQueue clear_queue(pLQueue pLQ);

//获取头元素
void get_head_node(pLQueue pLQ, void* data);

//入队
pLQueue en_queue(pLQueue pLQ);

//出队
pLQueue de_queue(pLQueue pLQ);

//获取队列长度
int get_length(pLQueue pLQ);

//操作函数
void print(pLQueue pLQ, void *p);

//遍历
void traverse_queue(pLQueue pLQ);
#endif 

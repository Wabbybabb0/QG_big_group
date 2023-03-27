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

//���������Ƿ�Ϊ��ȷ����������
bool is_false_type_int(int* val);
bool is_false_type_float(float* val);


//Ŀ¼
void menu();

//��ʼ������
pLQueue init_queue();

//�鿴�����Ƿ�Ϊ��
bool is_empty(pLQueue pLQ);

//���ٶ���
void destroy_queue(pLQueue pLQ);

//��ն���
pLQueue clear_queue(pLQueue pLQ);

//��ȡͷԪ��
void get_head_node(pLQueue pLQ, void* data);

//���
pLQueue en_queue(pLQueue pLQ);

//����
pLQueue de_queue(pLQueue pLQ);

//��ȡ���г���
int get_length(pLQueue pLQ);

//��������
void print(pLQueue pLQ, void *p);

//����
void traverse_queue(pLQueue pLQ);
#endif 

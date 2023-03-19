#ifndef _DULIST_H_
#define _DULIST_H_

#include<stdio.h>
#include<malloc.h>
#include<stdbool.h>

typedef int ElemType;

typedef struct DuLNode {
	ElemType data;
	struct DuLNode* pPrior, * pNext;
} DuLNode, * DuLinkedList;

//Ŀ¼
void menu();

//��ʼ��
DuLinkedList init_dul();

//�ж������Ƿ��������
bool is_false_type(int* val);

//����
void destroy_dul(DuLinkedList pHead);

//ǰ ����
bool insert_before_dul(DuLinkedList pHead);

//�� ����
bool insert_behind_dul(DuLinkedList pHead);

//ɾ��
bool delete_dul(DuLinkedList pHead);

//����
void traverse_dul(DuLinkedList pHead);

//���ڵ��Ƿ�Ϊ��
bool is_empty(DuLinkedList p);

#endif

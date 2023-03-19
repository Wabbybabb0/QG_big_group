#ifndef _LIST_H_
#define _LIST_H_

#include<stdio.h>
#include<malloc.h>
#include<stdbool.h>

typedef int ElemType;

typedef struct LNode {
	ElemType data;
	struct LNode* pNext;
}LNode, * LinkedList;


//Ŀ¼
void menu();

//����Ƿ�����Ϊ��ȷ����������
bool is_false_type(int* val);

//��������
LinkedList init_list();

//��������()
void destroy_list(LinkedList pHead);

//��������Ƿ�Ϊ��
bool is_empty(LinkedList p);

//��������
void traverse_list(LinkedList pHead);

//����
bool insert_list(LinkedList pHead);

//ɾ��
bool delete_list(LinkedList pHead, ElemType* val);

//����
bool search_list(LinkedList pHead);

//��ת
LinkedList reverse_list(LinkedList pHead);

//Ѱ���м�ڵ�
LinkedList find_mid_node(LinkedList pHead);

//��ż����
LinkedList reverse_even_list(LinkedList pHead);

//�жϳɻ�
bool is_loop(LinkedList pHead);

//�����ɻ�������
LinkedList creat_loop_list(LinkedList pHead);

//��ת(�ݹ�)
LinkedList recursion_reverse_list(LinkedList pFront, LinkedList pBack);



#endif


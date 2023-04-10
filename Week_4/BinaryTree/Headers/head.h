#ifndef _BINARY_TREE_H_
#define _BINARY_TREE_H_

#include<stdio.h>
#include<malloc.h>
#include<stdbool.h>
#define MAXSIZE 10

typedef int ElemType;

typedef struct NODE {
	ElemType data;
	struct NODE* pL;
	struct NODE* pR;
}Node, *pNode;

typedef struct BinarySortTree {
	pNode root;
}BST, *pBST;

typedef struct BTQueue {
	pNode *pArr;
	int front;
	int rear;
}BTQ, *pBTQ;

void menu();
//��ʼ��
void BST_init(pBST pT, pNode *pN);
//������Ƿ�Ϊ��
bool is_empty(pBST pT);
//�ݹ����
void BST_preorderR(pNode pN);
void BST_inorderR(pNode pN);
void BST_postorderR(pNode pN);
//����
void BST_sort(pBST pT, pNode *pN);
//����
void BST_delete(pBST pT);
//ɾ��
void BST_delete(pBST pT);
//����
bool BST_search(pBST pT, ElemType search_num, pNode* pReturn, pNode* pParent);
//��α���
void BST_levelorder(pNode pN);
////���г�ʼ��
//pNode Queue_init();
////�����Ƿ�Ϊ��
//bool is_empty_queue(pBTQ pBTQ);
////���
//void enqueue(pBTQ pBTQ, pNode pNew);
////����
//void dequeue(pBTQ pBTQ);






bool is_false_type_int(int* val);

#endif

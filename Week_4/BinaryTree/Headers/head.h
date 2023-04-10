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
//初始化
void BST_init(pBST pT, pNode *pN);
//检测树是否为空
bool is_empty(pBST pT);
//递归遍历
void BST_preorderR(pNode pN);
void BST_inorderR(pNode pN);
void BST_postorderR(pNode pN);
//排序
void BST_sort(pBST pT, pNode *pN);
//插入
void BST_delete(pBST pT);
//删除
void BST_delete(pBST pT);
//查找
bool BST_search(pBST pT, ElemType search_num, pNode* pReturn, pNode* pParent);
//层次遍历
void BST_levelorder(pNode pN);
////队列初始化
//pNode Queue_init();
////队列是否为空
//bool is_empty_queue(pBTQ pBTQ);
////入队
//void enqueue(pBTQ pBTQ, pNode pNew);
////出队
//void dequeue(pBTQ pBTQ);






bool is_false_type_int(int* val);

#endif

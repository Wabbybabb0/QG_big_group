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

//目录
void menu();

//初始化
DuLinkedList init_dul();

//判断数据是否符合类型
bool is_false_type(int* val);

//销毁
void destroy_dul(DuLinkedList pHead);

//前 插入
bool insert_before_dul(DuLinkedList pHead);

//后 插入
bool insert_behind_dul(DuLinkedList pHead);

//删除
bool delete_dul(DuLinkedList pHead);

//遍历
void traverse_dul(DuLinkedList pHead);

//检查节点是否为空
bool is_empty(DuLinkedList p);

#endif

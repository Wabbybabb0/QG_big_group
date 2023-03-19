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


//目录
void menu();

//检查是否输入为正确的数据类型
bool is_false_type(int* val);

//生成链表
LinkedList init_list();

//销毁链表()
void destroy_list(LinkedList pHead);

//检查链表是否为空
bool is_empty(LinkedList p);

//遍历链表
void traverse_list(LinkedList pHead);

//插入
bool insert_list(LinkedList pHead);

//删除
bool delete_list(LinkedList pHead, ElemType* val);

//查找
bool search_list(LinkedList pHead);

//反转
LinkedList reverse_list(LinkedList pHead);

//寻找中间节点
LinkedList find_mid_node(LinkedList pHead);

//奇偶调换
LinkedList reverse_even_list(LinkedList pHead);

//判断成环
bool is_loop(LinkedList pHead);

//创建成环单链表
LinkedList creat_loop_list(LinkedList pHead);

//反转(递归)
LinkedList recursion_reverse_list(LinkedList pFront, LinkedList pBack);



#endif


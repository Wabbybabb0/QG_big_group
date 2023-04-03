#ifndef _INSORT_H_
#define _INSORT_H_

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<malloc.h>
#include<stdbool.h>
#include<math.h>
#include<time.h>
#include<windows.h>
#include<errno.h>

typedef struct Node {
    int data;
    struct Node* pNext;
}Node, * pNode;

typedef struct LQqueue
{
    Node* pFront;
    Node* pRear;
    int len;
}LQueue, * pLQueue;

//插入排序
int* insert_sort(int* p, int size);

//快速排序
void quick_sort(int* p, int low, int high);
int find_pos(int* p, int low, int high);

//计数排序
int* count_sort(int* p, int size, int max);

//基数计数排序
void radix_count_sort(int* p, int size);
int pop_and_get(pLQueue bucket);

//颜色排序
void color_sort(int* p, int size);
void swap(int* val1, int* val2);
void color_practice();

//在无序序列中找到第K大/小的数
int find_x(int* p, int size, int pos);
void find_x_practice();

//归并排序
void merge_array(int* p, int begin, int mid, int end, int* temp);
void merge_sort(int* p, int begin, int end, int* temp);

//测试--不同的大量数据
void test1(int *a, int size);
//void test10000();
//void test50000();
//void test200000();

//测试--大量小数据量
void test2();

//测试--读写
void write_(FILE* pF, int size);
void read_(FILE* pF, int size);

//所有排序的测试
void test01();//插入
void test02();//快速
void test03();//计数
void test04();//基数
void test05();//颜色
void test06();//无序
void test07();//归并

void menu();


void is_false_type(int* val);
#endif
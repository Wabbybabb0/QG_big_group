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

//��������
int* insert_sort(int* p, int size);

//��������
void quick_sort(int* p, int low, int high);
int find_pos(int* p, int low, int high);

//��������
int* count_sort(int* p, int size, int max);

//������������
void radix_count_sort(int* p, int size);
int pop_and_get(pLQueue bucket);

//��ɫ����
void color_sort(int* p, int size);
void swap(int* val1, int* val2);
void color_practice();

//�������������ҵ���K��/С����
int find_x(int* p, int size, int pos);
void find_x_practice();

//�鲢����
void merge_array(int* p, int begin, int mid, int end, int* temp);
void merge_sort(int* p, int begin, int end, int* temp);

//����--��ͬ�Ĵ�������
void test1(int *a, int size);
//void test10000();
//void test50000();
//void test200000();

//����--����С������
void test2();

//����--��д
void write_(FILE* pF, int size);
void read_(FILE* pF, int size);

//��������Ĳ���
void test01();//����
void test02();//����
void test03();//����
void test04();//����
void test05();//��ɫ
void test06();//����
void test07();//�鲢

void menu();


void is_false_type(int* val);
#endif
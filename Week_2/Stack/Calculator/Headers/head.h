#ifndef _HEAD_H_
#define _HEAD_H_

#include<stdio.h>

int data_top;
int data_stack[50] ;

char oper_top;
char oper_stack[50];

//�ж���������ȼ�
int operator_priority(char oper);

//��������ջ
void oper_push(char oper);

//������ջ
void data_push(int data);

//�Զ�����Ԫ����
int operation(int data1, int data2, int oper);

#endif
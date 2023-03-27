#ifndef _HEAD_H_
#define _HEAD_H_

#include<stdio.h>

int data_top;
int data_stack[50] ;

char oper_top;
char oper_stack[50];

//判断运算符优先级
int operator_priority(char oper);

//操作符入栈
void oper_push(char oper);

//数字入栈
void data_push(int data);

//自定义两元运算
int operation(int data1, int data2, int oper);

#endif
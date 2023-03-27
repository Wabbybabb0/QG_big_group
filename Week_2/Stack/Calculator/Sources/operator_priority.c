#include"head.h"

//判断运算符优先级
int operator_priority(char oper)
{
	if (oper == '(')
		return 1;
	if (oper == '+' || oper == '-')
		return 2;
	if (oper == '*' || oper == '/')
		return 3;
}
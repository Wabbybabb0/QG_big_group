#include"head.h"

//�ж���������ȼ�
int operator_priority(char oper)
{
	if (oper == '(')
		return 1;
	if (oper == '+' || oper == '-')
		return 2;
	if (oper == '*' || oper == '/')
		return 3;
}
#include"head.h"

int operation(int data1, int data2, int oper)
{
	if (oper == '+')
	{
		return data1 + data2;
	}
	else if(oper == '-')
	{
		return data1 - data2;
	}
	else if (oper == '*')
	{
		return data1 * data2;
	}
	else if (oper == '/')
	{
		if (data2 == 0)
		{
			printf("��ĸ����Ϊ0��\n");
			exit(0);
		}
		else
		{
			return data1 / data2;
		}
	}
}
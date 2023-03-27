#include<stdio.h>
#include<math.h>
#include<string.h>
#include"head.h"

int data_top = 0;
int data_stack[50] = { 0 };

char oper_top = 0;
char oper_stack[50] = { 0 };

int main()
{
	char ch_temp;
	char expression[100] = {0};
	int i = 0;
	int data_temp[10] = {0};

	printf("����������������ʽ��\n");
	gets(expression);

	int size = (int)strlen(expression);

	while (i < size)
	{
		if (expression[i] == '(')
		{
			oper_push(expression[i]);
			i++;
		}
		else if (expression[i] >= '0' && expression[i] <= '9')
		{
			int data = 0;
			while (expression[i] >= '0' && expression[i] <= '9' && i < size)
			{
				data = data * 10 + (expression[i] - 48);
				i++;
			}
			data_push(data);
		}
		//+��-
		//��ǰ������ջ������ջΪ�� �� ջ��Ϊ"(" 
		//ջ����ջ��ջ��Ϊ"+"��"-"��"*"��"/" 
		//		   �� ����ջ�ڲ�ֹһ������ 
		//         �� ����ջ�ڲ�ֹһ������ 
		//         �� ջ����Ϊ������
		else if (expression[i] == '+' || expression[i] == '-')
		{
			if (oper_top == 0 || operator_priority(oper_stack[oper_top]) == 1)
			{
				oper_push(expression[i]);
			}
			else if (operator_priority(oper_stack[oper_top]) == 2 || operator_priority(oper_stack[oper_top]) == 3)
			{
				if (oper_top >= 1 && data_top > 1 && operator_priority(oper_stack[oper_top]) != 1)
				{
					int data1 = data_stack[data_top - 1];
					int data2 = data_stack[data_top];
					data_stack[data_top - 1] = operation(data1, data2, oper_stack[oper_top]);
					data_stack[data_top] = 0;
					oper_stack[oper_top] = '\0';
					data_top--;
					oper_top--;
				}
				oper_push(expression[i]);
			}
			i++;
		}

		//*��/
		//��ǰ������ջ������ջΪ�� �� ջ��Ϊ"(" �� ջ��Ϊ"+"��"-" 
		//ջ����ջ��ջ��Ϊ"*"��"/" 
		//		   �� ����ջ�ڲ�ֹһ������ 
		//         �� ����ջ�ڲ�ֹһ������ 
		//         �� ջ����Ϊ������
		else if (expression[i] == '*' || expression[i] == '/')
		{
			if (oper_top == 0 || operator_priority(oper_stack[oper_top]) == 1 || operator_priority(oper_stack[oper_top]) == 2)
			{
				oper_push(expression[i]);
			}
			else if (operator_priority(oper_stack[oper_top]) == 2 || operator_priority(oper_stack[oper_top]) == 3)
			{
				if (oper_top >= 1 && data_top > 1 && operator_priority(oper_stack[oper_top]) != 1)
				{
					int data1 = data_stack[data_top - 1];
					int data2 = data_stack[data_top];
					data_stack[data_top - 1] = operation(data1, data2, oper_stack[oper_top]);
					data_stack[data_top] = 0;
					oper_stack[oper_top] = '\0';
					data_top--;
					oper_top--;
				}
				oper_push(expression[i]);
			}
			i++;
		}

		//)
		else if (expression[i] == ')')
		{
			do
			{
				int data1 = data_stack[data_top - 1];
				int data2 = data_stack[data_top];
				data_stack[data_top - 1] = operation(data1, data2, oper_stack[oper_top]);
				data_stack[data_top] = 0;
				oper_stack[oper_top] = '\0';
				data_top--;
				oper_top--;
			} while (operator_priority(oper_stack[oper_top]) != 1 && oper_top >= 1 && data_top > 1);
			oper_stack[oper_top] = '\0';
			oper_top--;
			i++;
		}
	}
	while (oper_top >= 1 && data_top > 1)
	{
		int data1 = data_stack[data_top - 1];
		int data2 = data_stack[data_top];
		data_stack[data_top - 1] = operation(data1, data2, oper_stack[oper_top]);
		data_stack[data_top] = 0;
		oper_stack[oper_top] = '\0';
		oper_top--;
		data_top--;
	}
	printf("%d", data_stack[1]);

	return 0;
}
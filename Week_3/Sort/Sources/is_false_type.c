#include"head.h"

//���������Ƿ�Ϊ��ȷ����������
void is_false_type(int* val)
{
	int a = scanf_s("%d", val);
	while (a == 0)
	{
		rewind(stdin);
		printf("�����������������룺");
		a = scanf_s("%d", val);
	}
}
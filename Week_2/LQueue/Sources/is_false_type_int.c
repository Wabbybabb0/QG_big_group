#include"head.h"

//���������Ƿ�Ϊ��ȷ����������
bool is_false_type_int(int* val)
{
	int a = scanf_s("%d", val);
	while (a == 0)
	{
		rewind(stdin);
		printf("�����������������룺");
		a = scanf_s("%d", val);
	}
}
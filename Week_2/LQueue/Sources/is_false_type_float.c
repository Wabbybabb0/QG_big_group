#include"head.h"

bool is_false_type_float(float* val)
{
	float a = scanf_s("%f", val);
	while (a == 0)
	{
		rewind(stdin);
		printf("�����������������룺");
		a = scanf_s("%f", val);
	}
}
#include"head.h"

bool is_false_type_float(float* val)
{
	float a = scanf_s("%f", val);
	while (a == 0)
	{
		rewind(stdin);
		printf("输入有误！请重新输入：");
		a = scanf_s("%f", val);
	}
}
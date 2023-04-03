#include"head.h"

//检查输入的是否为正确的数据类型
void is_false_type(int* val)
{
	int a = scanf_s("%d", val);
	while (a == 0)
	{
		rewind(stdin);
		printf("输入有误！请重新输入：");
		a = scanf_s("%d", val);
	}
}
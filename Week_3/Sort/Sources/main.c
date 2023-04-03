#include<stdio.h>
#include<malloc.h>
#include"head.h"


int main()
{
	int choice = -1;
	FILE* pF = NULL;

	
	
	while (1)
	{
		menu();
		printf("请输入对应操作的数字：");
		is_false_type(&choice);
		switch (choice)
		{
		case 1:
			write_(pF, 10000);
			read_(pF, 10000);
			break;
		case 2:
			write_(pF, 50000);
			read_(pF, 50000);
			break;
		case 3:
			write_(pF, 200000);
			read_(pF, 200000);
			break;
		case 4:
			test2();
			break;
		case 5:
			color_practice();
			break;
		case 6:
			find_x_practice();
			break;
		case 0:
			exit(0);
			break;
		default:
			printf("输入有误！");
			break;
		}
		system("pause");
		system("cls");
	}
	pF = NULL;
	return 0;
}
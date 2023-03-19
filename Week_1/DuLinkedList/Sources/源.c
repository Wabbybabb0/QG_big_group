#include<stdio.h>
#include<malloc.h>
#include<stdbool.h>
#include "duList.h"

int main()
{
	bool state_main;							//检测是否要重新进行主函数
	bool state_control;							//检测是否执行了 destroy_dul()函数

	do
	{
		state_main = false;
		state_control = true;
		DuLinkedList pHead = NULL;
		int choice;

		while (1 && state_control)
		{
			menu();
			printf("请输入要执行的操作对应的数字：");
			scanf_s("%d", &choice);

			switch (choice)
			{
				//初始化
			case 1:
				pHead = init_dul();
				break;

				//遍历
			case 2:
				traverse_dul(pHead);
				break;

				//前插
			case 3:
				insert_before_dul(pHead);
				break;

				//后插
			case 4:
				insert_behind_dul(pHead);
				break;

				//删除
			case 5:
				delete_dul(pHead);
				break;

				//摧毁
			case 6:
				destroy_dul(pHead);
				state_main = true;
				state_control = false;
				break;

				//退出
			case 0:
				exit(0);
				break;
			default:
				break;
			}
			system("pause");
			system("cls");
		}
	} while (state_main);

	return 0;
}
#include<stdio.h>
#include"LinkStack.h"

int main()
{
	bool state_main = false;
	bool state_control = true;
	do
	{
		state_main = false;
		state_control = true;
		pLinkStack pS = NULL;
		int choice = 0;
		int length = 0;
		int data = 0;

		while (state_control)
		{
			menu();
			printf("\n请输入对应操作前的数字：");
			is_false_type(&choice);
			state_main = false;
			state_control = true;
			switch (choice)
			{
				//初始化栈
			case 1:
				pS = init_stack();
				break;

				//判断栈是否为空
			case 2:
				if (is_empty(pS))
				{
					printf("栈为空\n");
				}
				else
				{
					printf("栈不为空\n");
				}
				break;

				//获取栈顶元素
			case 3:
				if (get_top_node(pS, &data))
				{
					printf("栈顶元素为：%d\n", data);
				}
				break;

				//清空栈
			case 4:
				pS = clear_stack(pS);
				break;

				//销毁栈
			case 5:
				pS = destroy_stack(pS);
				state_control = false;
				state_main = true;
				break;

				//检测链表长度
			case 6:
				get_stack_length(pS, &length);
				printf("链表长度为：%d", length);
				break;

				//入栈
			case 7:
				pS = push(pS);
				break;

				//出栈
			case 8:
				pS = pop(pS);
				break;

			case 0:
				exit(0);
				break;

			default:
				printf("无法检查输入的指令！请重新输入！\n");
				break;
			}
			system("pause");
			system("cls");
		}
	} while (state_main);
	
	return 0;
}
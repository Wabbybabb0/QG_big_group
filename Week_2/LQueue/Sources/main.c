#include<stdio.h>
#include<string.h>
#include"head.h"

int main()
{
	bool state_main = false;
	bool state_control = true;

	do
	{
		state_main = false;
		state_control = true;
		void* data = NULL;
		int choice;
		int length;
		pLQueue pLQ = NULL;
		while (state_control)
		{
			menu();
			printf("请输入对应操作前的数字：");
			is_false_type_int(&choice);

			switch (choice)
			{
				//初始化
			case 1:
				pLQ = init_queue();
				break;

				//判断队列是否为空
			case 2:
				if (is_empty(pLQ))
				{
					printf("队列为空\n");
				}
				else
				{
					printf("队列不为空\n");
				}
				break;

				//销毁队列
			case 3:
				destroy_queue(pLQ);
				state_control = false;
				state_main = true;
				break;
				
				//清空队列
			case 4:
				pLQ = clear_queue(pLQ);
				break;

				//获取头节点
			case 5:
				get_head_node(pLQ, data);
				break;
				//print(pLQ, data);
		/*		switch (pLQ->type)
				{
				case 1:
					printf("头元素为：%d\n", *((int*)data));
					break;
				case 2:
					printf("头元素为：%f\n", *((float*)data));
					break;
				case 3:
					printf("头元素为：%c\n", *((char*)data));
					break;
				case 4:
					printf("头元素为：%s\n", (char*)data);
				}*/

				//入队
			case 6:
				pLQ = en_queue(pLQ);
				break;
				
				//出队
			case 7:
				pLQ = de_queue(pLQ);
				break;

				//获取队列长度
			case 8:
				length = get_length(pLQ);
				printf("队列长度为：%d", length);
				break;

				//遍历
			case 9:
				traverse_queue(pLQ);
				break;

			case 0:
				exit("0");
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
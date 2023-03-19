#include<stdio.h>
#include<stdbool.h>
#include<malloc.h>
#include"list.h"


int main()
{
	bool state_control = true;				//当 state_control 为 false 时，表明执行了 destroy_list()
	bool state_main = false;				//则 state_main 为 true，需要重新执行主函数

	do
	{
		state_control = true;
		state_main = false;
		LinkedList pHead = NULL;
		LinkedList* ppHead = &pHead;
		LinkedList pReserveHead = NULL;
		LinkedList pTemp = NULL;//用于检测
		ElemType val = 0;		//删除时储存被删除的数据
		int choice;


		while (1 && state_control)
		{
			menu();
			printf("请输入对应操作的数字：");
			scanf_s("%d", &choice);
			switch (choice)
			{
				//初始化链表
			case 1:
				pHead = init_list();
				break;

				//销毁链表
			case 2:
				destroy_list(pHead);
				state_control = false;
				state_main = true;
				break;

				//插入
			case 3:
				insert_list(pHead);
				break;

				//删除
			case 4:
				delete_list(pHead, &val);
				printf("删除的数据为%d\n", val);
				break;

				//查找
			case 5:
				if (search_list(pHead))
				{
					printf("找到了！");
				}
				else
				{
					printf("未找到！");
				}
				break;

				//遍历
			case 6:
				traverse_list(pHead);
				break;

				//反转(迭代实现)
			case 7:
				pReserveHead = reverse_list(pHead);
				LinkedList pNewHead1 = (LinkedList)malloc(sizeof(LNode));
				pNewHead1->pNext = pReserveHead;
				pHead = pNewHead1;
				break;

				//找中间节点
			case 8:
				pTemp = find_mid_node(pHead);
				printf("中间节点的数据为：%d\n", pTemp->data);
				break;

				//奇偶调换
			case 9:
				pHead = reverse_even_list(pHead);
				break;

				//判断链表是否成环
			case 10:
				//creat_loop_list(pHead);//用于测试返回"链表成环"的结果
				if (is_loop(pHead))
				{
					printf("链表成环\n");
				}
				else
				{
					printf("链表不成环\n");
				}
				break;

				//反转(递归)
			case 11:
				pReserveHead = reverse_list(pHead);
				LinkedList pNewHead2 = (LinkedList)malloc(sizeof(LNode));
				pNewHead2->pNext = pReserveHead;
				pHead = pNewHead2;
				break;

				//退出程序
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
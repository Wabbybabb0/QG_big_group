#include<stdio.h>
#include<stdbool.h>
#include<malloc.h>
#include"list.h"


int main()
{
	bool state_control = true;				//�� state_control Ϊ false ʱ������ִ���� destroy_list()
	bool state_main = false;				//�� state_main Ϊ true����Ҫ����ִ��������

	do
	{
		state_control = true;
		state_main = false;
		LinkedList pHead = NULL;
		LinkedList* ppHead = &pHead;
		LinkedList pReserveHead = NULL;
		LinkedList pTemp = NULL;//���ڼ��
		ElemType val = 0;		//ɾ��ʱ���汻ɾ��������
		int choice;


		while (1 && state_control)
		{
			menu();
			printf("�������Ӧ���������֣�");
			scanf_s("%d", &choice);
			switch (choice)
			{
				//��ʼ������
			case 1:
				pHead = init_list();
				break;

				//��������
			case 2:
				destroy_list(pHead);
				state_control = false;
				state_main = true;
				break;

				//����
			case 3:
				insert_list(pHead);
				break;

				//ɾ��
			case 4:
				delete_list(pHead, &val);
				printf("ɾ��������Ϊ%d\n", val);
				break;

				//����
			case 5:
				if (search_list(pHead))
				{
					printf("�ҵ��ˣ�");
				}
				else
				{
					printf("δ�ҵ���");
				}
				break;

				//����
			case 6:
				traverse_list(pHead);
				break;

				//��ת(����ʵ��)
			case 7:
				pReserveHead = reverse_list(pHead);
				LinkedList pNewHead1 = (LinkedList)malloc(sizeof(LNode));
				pNewHead1->pNext = pReserveHead;
				pHead = pNewHead1;
				break;

				//���м�ڵ�
			case 8:
				pTemp = find_mid_node(pHead);
				printf("�м�ڵ������Ϊ��%d\n", pTemp->data);
				break;

				//��ż����
			case 9:
				pHead = reverse_even_list(pHead);
				break;

				//�ж������Ƿ�ɻ�
			case 10:
				//creat_loop_list(pHead);//���ڲ��Է���"����ɻ�"�Ľ��
				if (is_loop(pHead))
				{
					printf("����ɻ�\n");
				}
				else
				{
					printf("�����ɻ�\n");
				}
				break;

				//��ת(�ݹ�)
			case 11:
				pReserveHead = reverse_list(pHead);
				LinkedList pNewHead2 = (LinkedList)malloc(sizeof(LNode));
				pNewHead2->pNext = pReserveHead;
				pHead = pNewHead2;
				break;

				//�˳�����
			case 0:
				exit(0);
				break;

			default:
				printf("�޷���������ָ����������룡\n");
				break;
			}

			system("pause");
			system("cls");
		}
	} while (state_main);

	return 0;
}
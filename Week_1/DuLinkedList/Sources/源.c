#include<stdio.h>
#include<malloc.h>
#include<stdbool.h>
#include "duList.h"

int main()
{
	bool state_main;							//����Ƿ�Ҫ���½���������
	bool state_control;							//����Ƿ�ִ���� destroy_dul()����

	do
	{
		state_main = false;
		state_control = true;
		DuLinkedList pHead = NULL;
		int choice;

		while (1 && state_control)
		{
			menu();
			printf("������Ҫִ�еĲ�����Ӧ�����֣�");
			scanf_s("%d", &choice);

			switch (choice)
			{
				//��ʼ��
			case 1:
				pHead = init_dul();
				break;

				//����
			case 2:
				traverse_dul(pHead);
				break;

				//ǰ��
			case 3:
				insert_before_dul(pHead);
				break;

				//���
			case 4:
				insert_behind_dul(pHead);
				break;

				//ɾ��
			case 5:
				delete_dul(pHead);
				break;

				//�ݻ�
			case 6:
				destroy_dul(pHead);
				state_main = true;
				state_control = false;
				break;

				//�˳�
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
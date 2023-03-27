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
			printf("\n�������Ӧ����ǰ�����֣�");
			is_false_type(&choice);
			state_main = false;
			state_control = true;
			switch (choice)
			{
				//��ʼ��ջ
			case 1:
				pS = init_stack();
				break;

				//�ж�ջ�Ƿ�Ϊ��
			case 2:
				if (is_empty(pS))
				{
					printf("ջΪ��\n");
				}
				else
				{
					printf("ջ��Ϊ��\n");
				}
				break;

				//��ȡջ��Ԫ��
			case 3:
				if (get_top_node(pS, &data))
				{
					printf("ջ��Ԫ��Ϊ��%d\n", data);
				}
				break;

				//���ջ
			case 4:
				pS = clear_stack(pS);
				break;

				//����ջ
			case 5:
				pS = destroy_stack(pS);
				state_control = false;
				state_main = true;
				break;

				//���������
			case 6:
				get_stack_length(pS, &length);
				printf("������Ϊ��%d", length);
				break;

				//��ջ
			case 7:
				pS = push(pS);
				break;

				//��ջ
			case 8:
				pS = pop(pS);
				break;

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
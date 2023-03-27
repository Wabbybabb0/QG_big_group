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
			printf("�������Ӧ����ǰ�����֣�");
			is_false_type_int(&choice);

			switch (choice)
			{
				//��ʼ��
			case 1:
				pLQ = init_queue();
				break;

				//�ж϶����Ƿ�Ϊ��
			case 2:
				if (is_empty(pLQ))
				{
					printf("����Ϊ��\n");
				}
				else
				{
					printf("���в�Ϊ��\n");
				}
				break;

				//���ٶ���
			case 3:
				destroy_queue(pLQ);
				state_control = false;
				state_main = true;
				break;
				
				//��ն���
			case 4:
				pLQ = clear_queue(pLQ);
				break;

				//��ȡͷ�ڵ�
			case 5:
				get_head_node(pLQ, data);
				break;
				//print(pLQ, data);
		/*		switch (pLQ->type)
				{
				case 1:
					printf("ͷԪ��Ϊ��%d\n", *((int*)data));
					break;
				case 2:
					printf("ͷԪ��Ϊ��%f\n", *((float*)data));
					break;
				case 3:
					printf("ͷԪ��Ϊ��%c\n", *((char*)data));
					break;
				case 4:
					printf("ͷԪ��Ϊ��%s\n", (char*)data);
				}*/

				//���
			case 6:
				pLQ = en_queue(pLQ);
				break;
				
				//����
			case 7:
				pLQ = de_queue(pLQ);
				break;

				//��ȡ���г���
			case 8:
				length = get_length(pLQ);
				printf("���г���Ϊ��%d", length);
				break;

				//����
			case 9:
				traverse_queue(pLQ);
				break;

			case 0:
				exit("0");
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
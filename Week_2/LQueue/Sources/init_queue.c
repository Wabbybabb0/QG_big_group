#include"head.h"

pLQueue init_queue()
{
	//ѡ����������
	int choice_type = 0;
	printf("��������е��������ͣ�\n");
	printf("***1.����*******\n");
	printf("***2.������*****\n");
	printf("***3.�ַ���*****\n");
	printf("***4.�ַ�����***\n");
	is_false_type_int(&choice_type);

	
	pLQueue pLQ = (pLQueue)malloc(sizeof(LQueue));
	pNode pHead = (pNode)malloc(sizeof(Node));
	pHead->pNext = NULL;
	pLQ->type = choice_type;
	pLQ->pFront = pHead;
	pLQ->pRear = pHead;

	int num = 0;
	printf("������Ҫ����Ҫ��ʼ���ĸ�����");
	is_false_type_int(&num);
	pLQ->length = num;
	
	for (int i = 0; i < num; i++)
	{
		pNode pNew = (pNode)malloc(sizeof(Node));
		printf("�������%d���ڵ�����ݣ�", i + 1);

		if (pLQ->type == 1)
		{
			int* init_i = (int*)malloc(sizeof(int));
			is_false_type_int(init_i);
			pNew->data = init_i;
		}
		else if (pLQ->type == 2)
		{
			float* init_f = (float*)malloc(sizeof(float));
			is_false_type_float(init_f);
			pNew->data = init_f;
		}
		else if (pLQ->type == 3)
		{
			rewind(stdin);
			char* init_c = (char*)malloc(sizeof(char));
			scanf_s("%c", init_c);
			pNew->data = init_c;
		}
		else if (pLQ->type == 4)
		{
			rewind(stdin);
			char* init_ch = (char*)malloc(sizeof(char) * 20);
			gets(init_ch);
			/*scanf_s("%s", init_ch);*/
			pNew->data = init_ch;
		}
		pNew->pNext = NULL;
		pLQ->pRear->pNext = pNew;
		pLQ->pRear = pNew;
	}
	return pLQ;
}


//switch (pLQ->type)
//{
//case 1:
//	scanf_s("%d", &init_i);
//	pNew->data = &init_i;
//	break;
//case 2:
//	scanf_s("%f", &init_f);
//	pNew->data = &init_f;
//	break;
//case 3:
//	scanf_s("%c", &init_c);
//	pNew->data = &init_c;
//	break;
//case 4:
//	scanf_s("%s", &init_ch);
//	pNew->data = &init_ch;
//	break;
//}
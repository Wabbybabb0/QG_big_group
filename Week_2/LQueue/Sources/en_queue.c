#include"head.h"

pLQueue en_queue(pLQueue pLQ)
{
	if (pLQ!=NULL)
	{
		int* en_i = (int*)malloc(sizeof(int));
		float* en_f = (float*)malloc(sizeof(float));
		char* en_c = (char*)malloc(sizeof(char));
		char* en_ch = (char*)malloc(sizeof(char) * 20);


		pNode pNew = (pNode)malloc(sizeof(Node));
		switch (pLQ->type)
		{
		case 1:
			printf("�ֶ��е����������ǡ����͡�,�����룺");
			is_false_type_int(en_i);
			pNew->data = en_i;
			break;
		case 2:
			printf("�ֶ��е����������ǡ������͡�,�����룺");
			is_false_type_float(en_f);
			pNew->data = en_f;
			break;
		case 3:
			printf("�ֶ��е����������ǡ��ַ��͡�,�����룺");
			rewind(stdin);
			scanf_s("%c", en_c);
			pNew->data = en_c;
			break;
		case 4:
			printf("�ֶ��е����������ǡ��ַ����͡�,�����룺");
			rewind(stdin);
			gets(en_ch);
			pNew->data = en_ch;
			break;
		}
		pLQ->pRear->pNext = pNew;
		pLQ->pRear = pNew;
		pNew->pNext = NULL;
		pLQ->length++;
	}
	else
	{
		printf("���ʧ�ܣ����ȳ�ʼ�����У�\n");
	}
	return pLQ;
}
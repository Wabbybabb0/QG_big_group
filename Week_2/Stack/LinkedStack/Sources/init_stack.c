#include"LinkStack.h"


//��ʼ����ջ
pLinkStack init_stack()
{
	pLinkStack pS = (pLinkStack)malloc(sizeof(LinkStack));

	if (pS == NULL)
	{
		printf("�ڵ㴴��ʧ�ܣ�����������˳�");
		system("pause");
		exit(-1);
	}

	pS->pTop = NULL;
	pS->count = 0;
	int num = 0;
	int data = 0;

	printf("��������Ҫ��������ջ�ڵ������");
	is_false_type(&num);
	pS->count = num;
	for (int i = 0; i < num; i++)
	{
		pStackNode pNew = (pStackNode)malloc(sizeof(StackNode));
		if (pNew == NULL)
		{
			printf("�ڵ㴴��ʧ�ܣ�����������˳�");
			system("pause");
			exit(-1);
		}

		printf("��%d���ڵ������Ϊ��", i+1);
		is_false_type(&data);
		pNew->data = data;
		if (i == 0)
		{
			pNew->pNext = NULL;
			pS->pTop = pNew;
		}
		else
		{
			pNew->pNext = pS->pTop;
			pS->pTop = pNew;
		}
	}
	
	return pS;
}
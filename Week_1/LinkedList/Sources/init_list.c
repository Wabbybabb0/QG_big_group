#include"list.h"

//��������
LinkedList init_list()
{
	int len;		//����ĳ���
	ElemType val;	//��ʱ����ÿ���ڵ������

	//����ͷ�ڵ�
	LinkedList pHead = (LinkedList)malloc(sizeof(LNode));

	//���ͷ�ڵ��Ƿ񴴽��ɹ�
	if (pHead == NULL)
	{
		printf("ͷ�ڵ��ڴ����ʧ�ܣ�\n");
		exit(-1);
	}

	//����βָ��
	LinkedList pTail = pHead;
	pTail->pNext = NULL;

	printf("�����������ʼ���ڵ������");
	is_false_type(&len);

	//��ʼ��������
	for (int i = 0; i < len; i++)
	{
		printf("�������%d���ڵ�����ݣ�", i + 1);
		is_false_type(&val);

		LinkedList pNew = (LinkedList)malloc(sizeof(LNode));
		//����½ڵ��Ƿ񴴽��ɹ�
		if (pNew == NULL)
		{
			printf("�½ڵ��ڴ����ʧ�ܣ�\n");
			exit(-1);
		}

		pNew->data = val;
		pTail->pNext = pNew;
		pNew->pNext = NULL;
		pTail = pNew;
	}
	return pHead;
}
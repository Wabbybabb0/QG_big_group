#include"duList.h"

//��ʼ��
DuLinkedList init_dul()
{
	DuLinkedList pHead = (DuLinkedList)malloc(sizeof(DuLNode));
	int num;
	ElemType val = 1;
	DuLinkedList pTail = pHead;

	if (!is_empty(pHead))
	{
		printf("����Ҫ�����Ľڵ������");
		is_false_type(&num);

		for (int i = 0; i < num; i++)
		{
			DuLinkedList pNew = (DuLinkedList)malloc(sizeof(DuLNode));
			if (!is_empty(pNew))
			{
				printf("�������%d�����ݣ�", i + 1);
				is_false_type(&val);
				pTail->pNext = pNew;
				pNew->pPrior = pHead;
				pNew->data = val;
				pNew->pNext = NULL;
				pTail = pNew;
			}
		}
	}
	return pHead;
}
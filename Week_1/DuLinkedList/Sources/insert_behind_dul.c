#include"duList.h"

//���
bool insert_behind_dul(DuLinkedList pHead)
{
	int pos;
	ElemType val;
	int i = 0;
	DuLinkedList pTemp = pHead;
	DuLinkedList pTNext = NULL;

	printf("������Ҫ�����λ�ã�");
	is_false_type(&pos);
	printf("������Ҫ��������ݣ�");
	is_false_type(&val);

	while (i < pos && pTemp != NULL)
	{
		pTemp = pTemp->pNext;
		i++;
	}
	if (pos < i && pTemp == NULL)
	{
		printf("��λ������");
		exit(-1);
	}

	//��ʱ pTemp ָ�����Ҫ�����λ�õ� ��һ���ڵ�
	DuLinkedList pNew = (DuLinkedList)malloc(sizeof(DuLNode));
	if (!is_empty(pNew))
	{
		pTNext = pTemp->pNext;
		pTemp->pNext = pNew;

		pNew->pPrior = pTemp;
		pNew->data = val;
		pNew->pNext = pTNext;

		pTNext->pPrior = pNew;
	}
}
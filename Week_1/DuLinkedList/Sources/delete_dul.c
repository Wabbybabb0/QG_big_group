#include"duList.h"

//ɾ��
bool delete_dul(DuLinkedList pHead)
{
	int pos;
	int i = 0;
	DuLinkedList pTemp1 = pHead;
	DuLinkedList pTemp2 = NULL;
	DuLinkedList pDelete = NULL;


	printf("������Ҫɾ���Ľڵ��λ�ã�");
	is_false_type(&pos);

	while (i < pos - 1 && pTemp1->pNext != NULL)
	{
		pTemp1 = pTemp1->pNext;
		i++;
	}
	if (i > pos - 1 || pTemp1->pNext == NULL)
	{
		printf("��λ������");
		exit(-1);
	}

	//��ʱ pTemp1 ָ����� Ҫɾ���ڵ����һ���ڵ�

	pDelete = pTemp1->pNext;
	pTemp2 = pDelete->pNext;
	free(pDelete);
	pDelete = NULL;
	pTemp1->pNext = pTemp2;
	if (pTemp2 != NULL)
	{
		pTemp2->pPrior = pTemp1;
	}
}
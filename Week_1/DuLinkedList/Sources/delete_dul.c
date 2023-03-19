#include"duList.h"

//删除
bool delete_dul(DuLinkedList pHead)
{
	int pos;
	int i = 0;
	DuLinkedList pTemp1 = pHead;
	DuLinkedList pTemp2 = NULL;
	DuLinkedList pDelete = NULL;


	printf("请输入要删除的节点的位置：");
	is_false_type(&pos);

	while (i < pos - 1 && pTemp1->pNext != NULL)
	{
		pTemp1 = pTemp1->pNext;
		i++;
	}
	if (i > pos - 1 || pTemp1->pNext == NULL)
	{
		printf("点位不存在");
		exit(-1);
	}

	//此时 pTemp1 指向的是 要删除节点的上一个节点

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
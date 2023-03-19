#include"duList.h"

//后插
bool insert_behind_dul(DuLinkedList pHead)
{
	int pos;
	ElemType val;
	int i = 0;
	DuLinkedList pTemp = pHead;
	DuLinkedList pTNext = NULL;

	printf("请输入要插入的位置：");
	is_false_type(&pos);
	printf("请输入要插入的数据：");
	is_false_type(&val);

	while (i < pos && pTemp != NULL)
	{
		pTemp = pTemp->pNext;
		i++;
	}
	if (pos < i && pTemp == NULL)
	{
		printf("点位不存在");
		exit(-1);
	}

	//此时 pTemp 指向的是要插入的位置的 上一个节点
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
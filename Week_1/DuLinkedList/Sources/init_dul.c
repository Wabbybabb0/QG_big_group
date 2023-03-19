#include"duList.h"

//初始化
DuLinkedList init_dul()
{
	DuLinkedList pHead = (DuLinkedList)malloc(sizeof(DuLNode));
	int num;
	ElemType val = 1;
	DuLinkedList pTail = pHead;

	if (!is_empty(pHead))
	{
		printf("输入要创建的节点个数：");
		is_false_type(&num);

		for (int i = 0; i < num; i++)
		{
			DuLinkedList pNew = (DuLinkedList)malloc(sizeof(DuLNode));
			if (!is_empty(pNew))
			{
				printf("请输入第%d个数据：", i + 1);
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
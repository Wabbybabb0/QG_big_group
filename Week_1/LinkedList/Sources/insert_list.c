#include"list.h"

//插入
bool insert_list(LinkedList pHead)
{
	int pos;//位置
	ElemType val;//数据
	int i = 0;

	printf("请输入插入的位置：");
	is_false_type(&pos);
	printf("请输入插入的数据：");
	is_false_type(&val);

	if (!is_empty(pHead))
	{
		LinkedList pTemp = pHead;
		while (i < pos - 1 && pTemp != NULL)
		{
			pTemp = pTemp->pNext;
			i++;
		}
		if (i > pos - 1 || pTemp == NULL)
		{
			printf("该点位不存在或输入错误！\n");
			return false;
		}
		//此时pHead指向的是 所要插入的位置的上一个节点

		LinkedList pNew = (LinkedList)malloc(sizeof(LNode));
		pNew->pNext = NULL;
		if (!is_empty(pNew))
		{
			pNew->data = val;
			pNew->pNext = pTemp->pNext;
			pTemp->pNext = pNew;

		}
	}
	return true;
}
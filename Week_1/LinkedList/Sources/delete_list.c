#include"list.h"

//删除
bool delete_list(LinkedList pHead, ElemType* val)
{
	int pos;
	int i = 0;

	if (!is_empty(pHead))
	{
		LinkedList pTemp = pHead;
		printf("请输入要删除的节点的位置：");
		is_false_type(&pos);
		while (i < pos - 1 && pTemp->pNext != NULL)
		{
			pTemp = pTemp->pNext;
			i++;
		}
		if (i > pos - 1 || pTemp->pNext == NULL)
		{
			printf("该点位不存在或输入错误！\n");
			return false;
		}
		//此时pTemp指向 要删除节点的 上一个节点
		LinkedList pDelete = pTemp->pNext;
		LinkedList p = pDelete->pNext;
		*val = pDelete->data;
		free(pDelete);
		pDelete = NULL;
		pTemp->pNext = p;
		return true;
	}
}
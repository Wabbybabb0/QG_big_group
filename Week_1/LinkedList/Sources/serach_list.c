#include"list.h"

//查找
bool search_list(LinkedList pHead)
{
	ElemType val;
	printf("请输入要查找的数据：");
	is_false_type(&val);


	if (!is_empty(pHead))
	{
		LinkedList pTemp = pHead->pNext;
		while (pTemp != NULL)
		{
			if (pTemp->data == val)
			{
				return true;
			}
			pTemp = pTemp->pNext;
		}
		return false;
	}
}
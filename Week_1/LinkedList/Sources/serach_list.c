#include"list.h"

//����
bool search_list(LinkedList pHead)
{
	ElemType val;
	printf("������Ҫ���ҵ����ݣ�");
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
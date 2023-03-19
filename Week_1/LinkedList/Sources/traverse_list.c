#include"list.h"

//±éÀúÁ´±í
void traverse_list(LinkedList pHead)
{
	if (!is_empty(pHead))
	{
		LinkedList pTemp = pHead->pNext;
		while (pTemp != NULL)
		{
			printf("%d ", pTemp->data);
			pTemp = pTemp->pNext;
		}
		printf("\n");
	}
}
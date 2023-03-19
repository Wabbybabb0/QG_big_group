#include"list.h"

//·´×ª
LinkedList reverse_list(LinkedList pHead)
{
	if (!is_empty(pHead))
	{
		LinkedList pTemp1 = pHead->pNext;
		LinkedList pTemp2 = pTemp1->pNext;
		pHead->pNext = NULL;
		free(pHead);
		pHead = NULL;

		while (pTemp2 != NULL)
		{
			pTemp1->pNext = pHead;
			pHead = pTemp1;
			pTemp1 = pTemp2;
			pTemp2 = pTemp2->pNext;
		}
		pTemp1->pNext = pHead;
		pHead = pTemp1;
		pTemp1 = NULL;
		return pHead;
	}
}

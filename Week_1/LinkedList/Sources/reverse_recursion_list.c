#include"list.h"

//·´×ª(µÝ¹é)
LinkedList recursion_reverse_list(LinkedList pHead)
{
	if (pHead == NULL || pHead->pNext == NULL)
	{
		return pHead;
	}
	else
	{
		LinkedList pTemp = pHead->pNext;
		LinkedList pReturn = recursion_reverse_list(pTemp);
		pTemp->pNext = pHead;
		pHead->pNext = NULL;
	}
}

#include"list.h"

//寻找中间节点
LinkedList find_mid_node(LinkedList pHead)
{
	if (!is_empty(pHead))
	{
		LinkedList pFast = pHead;
		LinkedList pSlow = pHead;

		while (pFast != NULL && pFast->pNext != NULL)
		{
			pFast = pFast->pNext->pNext;
			pSlow = pSlow->pNext;
		}
		return pSlow;
	}
}
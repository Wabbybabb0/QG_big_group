#include"list.h"

//ÅÐ¶Ï³É»·
bool is_loop(LinkedList pHead)
{
	if (!is_empty(pHead))
	{
		LinkedList pFast = pHead;
		LinkedList pSlow = pHead;

		while (pFast != NULL && pFast->pNext != NULL)
		{
			pFast = pFast->pNext->pNext;
			pSlow = pSlow->pNext;
			if (pFast == pSlow)
			{
				return true;
			}
		}
		return false;
	}
}

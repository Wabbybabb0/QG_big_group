#include"head.h"

pLQueue clear_queue(pLQueue pLQ)
{
	if (!is_empty(pLQ))
	{
		pNode pTemp1 = pLQ->pFront->pNext;
		pNode pTemp2 = NULL;
		while (pTemp1 !=pLQ->pRear)
		{
			pTemp2 = pTemp1->pNext;
			free(pTemp1);
			pTemp1 = pTemp2;
		}
		free(pTemp1);
		pTemp1 = NULL;
		pLQ->pRear = pLQ->pFront;
		pLQ->length = 0;
	}
	return pLQ;
}
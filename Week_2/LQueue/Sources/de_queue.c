#include"head.h"

pLQueue de_queue(pLQueue pLQ)
{
	if (!is_empty(pLQ))
	{
		pNode pTemp = pLQ->pFront->pNext->pNext;
		free(pLQ->pFront->pNext);
		pLQ->pFront->pNext = pTemp;
		pLQ->length--;
	}
	else
	{
		printf("╤сапн╙©уё║\n");
	}
	return pLQ;
}
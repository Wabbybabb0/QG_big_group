#include"head.h"

void traverse_queue(pLQueue pLQ)
{
	if (!is_empty(pLQ))
	{
		pNode pTemp = pLQ->pFront->pNext;
		for (int i = 0; i < pLQ->length; i++)
		{
			print(pLQ, pTemp->data);
			pTemp = pTemp->pNext;
		}
	}
}
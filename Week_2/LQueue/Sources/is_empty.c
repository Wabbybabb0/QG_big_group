#include"head.h"

bool is_empty(pLQueue pLQ)
{
	if (pLQ == NULL || pLQ->pFront == pLQ->pRear)
	{
		return true;
	}
	else
	{
		return false;
	}
}
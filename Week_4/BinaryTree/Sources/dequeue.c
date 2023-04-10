#include"head.h"

pNode dequeue(pBTQ pBTQ)
{
	if (is_empty_queue(pBTQ))
	{
		printf("╤сапн╙©у!\n");
		return;
	}
	pBTQ->front = (pBTQ->front + 1) % MAXSIZE;
	return pBTQ->pArr[pBTQ->front];
}
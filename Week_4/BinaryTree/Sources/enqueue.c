#include"head.h"

void enqueue(pBTQ pBTQ, pNode pNew)
{
	if ((pBTQ->rear + 1) % MAXSIZE == (pBTQ->front) % MAXSIZE)
	{
		printf("�޷����\n");
		return;
	}
	pBTQ->pArr[pBTQ->rear] = pNew;
	pBTQ->rear = (pBTQ->rear + 1) % MAXSIZE;
}
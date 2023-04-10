#include"head.h"

void BST_levelorder(pNode pN)
{
	pNode stack[MAXSIZE];
	pNode pTemp = pN;
	int front = 0;
	int rear = 0;
	stack[rear++] = pTemp;
	if (pN == NULL)
	{
		printf("Ê÷Îª¿Õ£¡\n");
		return;
	}
	while (front != rear)
	{
		pN = stack[front++];
		printf("%d ", pN->data);
		if (pN->pL != NULL)
		{
			stack[rear++] = pN->pL;
		}
		if (pN->pR != NULL)
		{
			stack[rear++] = pN->pR;
		}
	}
}
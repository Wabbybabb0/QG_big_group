#include"head.h"

pBTQ Queue_init()
{
	pBTQ queue_array = (pBTQ)malloc(sizeof(BTQ));
	queue_array->front = 0;
	queue_array->rear = 1;
	queue_array->pArr = (pNode)malloc(sizeof(Node) * MAXSIZE);
	return queue_array;
}
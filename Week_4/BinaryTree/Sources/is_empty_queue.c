#include"head.h"

bool is_empty_queue(pBTQ pBTQ)
{
	if ((pBTQ->front + 1) % MAXSIZE == pBTQ->rear)
	{
		return true;
	}
	return false;
}
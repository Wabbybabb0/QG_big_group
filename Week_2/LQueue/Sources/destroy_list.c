#include"head.h"

void destroy_queue(pLQueue pLQ)
{
	if (!is_empty(pLQ))
	{
		clear_queue(pLQ);
		free(pLQ->pFront);
		free(pLQ);
	}
	else
	{
		printf("队列未初始化，无法销毁！\n");
	}
}
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
		printf("����δ��ʼ�����޷����٣�\n");
	}
}
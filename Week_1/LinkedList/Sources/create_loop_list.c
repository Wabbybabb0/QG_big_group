#include"list.h"

//�����ɻ�������
LinkedList creat_loop_list(LinkedList pHead)
{
	LinkedList pTemp = pHead;
	while (pTemp->pNext != NULL)
	{
		pTemp = pTemp->pNext;
	}
	pTemp->pNext = pHead->pNext;
	return pHead;
}
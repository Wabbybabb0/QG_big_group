#include"duList.h"

//±éÀú
void traverse_dul(DuLinkedList pHead)
{
	if (!is_empty(pHead))
	{
		DuLinkedList pTemp = pHead->pNext;
		while (pTemp != NULL)
		{
			printf("%d ", pTemp->data);
			pTemp = pTemp->pNext;
		}
		printf("\n");
	}
}
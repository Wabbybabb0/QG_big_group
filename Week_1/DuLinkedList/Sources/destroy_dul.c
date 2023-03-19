#include"duList.h"

//Ïú»Ù
void destroy_dul(DuLinkedList pHead)
{
	DuLinkedList pTemp1 = pHead->pNext;
	DuLinkedList pTemp2 = pTemp1->pNext;

	while (pTemp2 != NULL)
	{
		free(pTemp1);
		pTemp1 = pTemp2;
		pTemp2 = pTemp2->pNext;
	}
	free(pTemp1);
	pTemp1 = NULL;
	free(pHead);
	pHead = NULL;
}
#include"list.h"

//Ïú»ÙÁ´±í()
void destroy_list(LinkedList pHead)
{
	if (!is_empty(pHead))
	{
		LinkedList pTemp1, pTemp2;
		pTemp1 = pHead->pNext;
		pTemp2 = pTemp1->pNext;

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
}

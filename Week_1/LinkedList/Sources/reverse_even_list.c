#include"list.h"


//ÆæÅ¼µ÷»»
LinkedList reverse_even_list(LinkedList pHead)
{
	if (!is_empty(pHead))
	{
		LinkedList p1 = pHead;
		LinkedList p2 = p1->pNext;
		LinkedList p3 = p2->pNext;
		if (p3 == NULL)
		{
			return pHead;
		}
		else
		{
			while (1)
			{
				p2->pNext = p3->pNext;
				p3->pNext = p2;
				p1->pNext = p3;
				if (p2->pNext != NULL && p2->pNext->pNext != NULL)
				{
					p1 = p2;
					p2 = p2->pNext;
					p3 = p2->pNext;
				}
				else
				{
					break;
				}
			}
		}
	}
	return pHead;
}

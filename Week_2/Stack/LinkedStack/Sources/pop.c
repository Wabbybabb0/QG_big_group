#include"LinkStack.h"

//��ջ
pLinkStack pop(pLinkStack pS)
{
	if (!is_empty(pS))
	{
		pStackNode pTemp = pS->pTop;
		pS->pTop = pS->pTop->pNext;
		pS->count--;
		free(pTemp);
		return pS;
	}
}
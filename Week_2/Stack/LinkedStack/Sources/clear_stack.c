#include"LinkStack.h"

//Çå¿ÕÕ»
pLinkStack clear_stack(pLinkStack pS)
{
	pStackNode pTemp = NULL;
	if (!is_empty(pS))
	{
		pS->count = 0;
		while (pTemp != NULL)
		{
			pTemp = pS->pTop->pNext;
			free(pS->pTop);
			pS->pTop = pTemp;
		}
		free(pTemp);
	}
	return pS;
}

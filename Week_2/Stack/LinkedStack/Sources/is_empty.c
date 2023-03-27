#include "LinkStack.h"

bool is_empty(pLinkStack pS)
{
	if (pS == NULL || pS->count==0)
	{
		return true;
	}
	else
	{
		return false;
	}
}
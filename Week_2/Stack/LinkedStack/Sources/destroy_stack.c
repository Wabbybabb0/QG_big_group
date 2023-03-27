#include"LinkStack.h"

//Ïú»ÙÕ»
pLinkStack destroy_stack(pLinkStack pS)
{
	if (!is_empty(pS))
	{
		clear_stack(pS);
		free(pS);
		pS = NULL;
	}
	return pS;
}
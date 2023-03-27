#include"LinkStack.h"

void get_stack_length(pLinkStack pS, int* length)
{
	if (!is_empty(pS))
	{
		*length = pS->count;
	}
}
#include"LinkStack.h"

//»ñÈ¡Õ»¶¥ÔªËØ
bool get_top_node(pLinkStack pS, int *data)
{
	if (is_empty(pS))
	{
		printf("Õ»Îª¿Õ£¡\n");
		return false;
	}
	else
	{
		*data = pS->pTop->data;
		return true;
	}
}


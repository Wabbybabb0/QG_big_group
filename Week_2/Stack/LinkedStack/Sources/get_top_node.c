#include"LinkStack.h"

//��ȡջ��Ԫ��
bool get_top_node(pLinkStack pS, int *data)
{
	if (is_empty(pS))
	{
		printf("ջΪ�գ�\n");
		return false;
	}
	else
	{
		*data = pS->pTop->data;
		return true;
	}
}


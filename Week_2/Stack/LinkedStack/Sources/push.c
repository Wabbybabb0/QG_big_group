#include"LinkStack.h"

//入栈
pLinkStack push(pLinkStack pS)
{
	int data = 0;
	printf("请输入新节点数据：");
	is_false_type(&data);
	pStackNode pNew = (pStackNode)malloc(sizeof(StackNode));
	if (!is_empty(pS))
	{
		pNew->pNext = pS->pTop;
		pS->pTop = pNew;
		pNew->data = data;
		pS->count++;
		return pS;
	}
	else
	{
		printf("为初始化栈，不可入栈\n");
		pS = NULL;
		return pS;
	}
}
	
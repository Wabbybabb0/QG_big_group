#include"LinkStack.h"

//��ջ
pLinkStack push(pLinkStack pS)
{
	int data = 0;
	printf("�������½ڵ����ݣ�");
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
		printf("Ϊ��ʼ��ջ��������ջ\n");
		pS = NULL;
		return pS;
	}
}
	
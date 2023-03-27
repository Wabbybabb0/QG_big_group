#include"LinkStack.h"


//初始化链栈
pLinkStack init_stack()
{
	pLinkStack pS = (pLinkStack)malloc(sizeof(LinkStack));

	if (pS == NULL)
	{
		printf("节点创建失败！按下任意键退出");
		system("pause");
		exit(-1);
	}

	pS->pTop = NULL;
	pS->count = 0;
	int num = 0;
	int data = 0;

	printf("请输入需要创建的链栈节点个数：");
	is_false_type(&num);
	pS->count = num;
	for (int i = 0; i < num; i++)
	{
		pStackNode pNew = (pStackNode)malloc(sizeof(StackNode));
		if (pNew == NULL)
		{
			printf("节点创建失败！按下任意键退出");
			system("pause");
			exit(-1);
		}

		printf("第%d个节点的数据为：", i+1);
		is_false_type(&data);
		pNew->data = data;
		if (i == 0)
		{
			pNew->pNext = NULL;
			pS->pTop = pNew;
		}
		else
		{
			pNew->pNext = pS->pTop;
			pS->pTop = pNew;
		}
	}
	
	return pS;
}
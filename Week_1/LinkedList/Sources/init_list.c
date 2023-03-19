#include"list.h"

//生成链表
LinkedList init_list()
{
	int len;		//链表的长度
	ElemType val;	//暂时储存每个节点的数据

	//创建头节点
	LinkedList pHead = (LinkedList)malloc(sizeof(LNode));

	//检查头节点是否创建成功
	if (pHead == NULL)
	{
		printf("头节点内存分配失败！\n");
		exit(-1);
	}

	//创建尾指针
	LinkedList pTail = pHead;
	pTail->pNext = NULL;

	printf("请输入链表初始化节点个数：");
	is_false_type(&len);

	//开始创建链表
	for (int i = 0; i < len; i++)
	{
		printf("请输入第%d个节点的数据：", i + 1);
		is_false_type(&val);

		LinkedList pNew = (LinkedList)malloc(sizeof(LNode));
		//检查新节点是否创建成功
		if (pNew == NULL)
		{
			printf("新节点内存分配失败！\n");
			exit(-1);
		}

		pNew->data = val;
		pTail->pNext = pNew;
		pNew->pNext = NULL;
		pTail = pNew;
	}
	return pHead;
}
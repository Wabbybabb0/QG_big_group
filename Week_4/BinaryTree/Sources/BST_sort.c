#include"head.h"

void BST_sort(pBST pT, pNode *pN)
{
	int data = 0;
	printf("请输入根节点的数据:");
	is_false_type_int(&data);
	*pN = (pNode)malloc(sizeof(Node));
	(*pN)->data = data;
	pT->root = (*pN);
	pT->root->pL = NULL;
	pT->root->pR = NULL;
	
	while (1)
	{
		bool is_insert = false;
		pNode pTemp = pT->root;
		printf("请输入节点的数据:(节点为0时退出)");
		is_false_type_int(&data);
		if (data == 0)
		{
			break;
		}

		while (!is_insert)
		{
			if (data > pTemp->data && pTemp->pR == NULL)
			{
				pNode pNew = (pNode)malloc(sizeof(Node));
				pTemp->pR = pNew;
				pNew->data = data;
				pNew->pL = NULL;
				pNew->pR = NULL;
				is_insert = true;
			}
			else if(data>pTemp->data && !is_insert)
			{
				pTemp = pTemp->pR;
			}

			if (data < pTemp->data && pTemp->pL == NULL)
			{
				pNode pNew = (pNode)malloc(sizeof(Node));
				pTemp->pL = pNew;
				pNew->data = data;
				pNew->pL = NULL;
				pNew->pR = NULL;
				is_insert = true;
			}
			else if (data < pTemp->data && !is_insert)
			{
				pTemp = pTemp->pL;
			}

			if (data == pTemp->data)
			{
				printf("输入重复！请重新输入！\n");
				break;
			}
		}	
	}
}
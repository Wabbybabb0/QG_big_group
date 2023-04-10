#include"head.h"

void BST_delete(pBST pT)
{
	ElemType delete_num;
	pNode pReturn = NULL;
	pNode pParent = NULL;
	printf("请输入要删除的数据：");
	is_false_type_int(&delete_num);
	if (!BST_search(pT, delete_num, &pReturn,&pParent))
	{
		printf("未能找到该节点！删除失败！\n");
		return;
	}
	else
	{
		if (pReturn->pL == NULL && pReturn->pR == NULL)
		{
			free(pReturn);
			pReturn = NULL;
		}
		else if (pReturn->pL == NULL && pReturn->pR != NULL)
		{
			if (pParent->pL == pReturn)
			{
				pParent->pL = pReturn->pR;
			}
			else if(pParent->pR == pReturn)
			{
				pParent->pR = pReturn->pR;
			}
			free(pReturn);
			pReturn = NULL;
		}
		else if (pReturn->pL != NULL && pReturn->pR == NULL)
		{
			if (pParent->pL == pReturn)
			{
				pParent->pL = pReturn->pR;
			}
			else if(pParent->pR == pReturn)
			{
				pParent->pR = pReturn->pR;
			}
			free(pReturn);
			pReturn = NULL;
		}
		else if (pReturn->pL != NULL && pReturn->pR != NULL)
		{
			printf("暂时不会....\n");
		}
	}
	
}
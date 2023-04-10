#include"head.h"

bool BST_search(pBST pT, ElemType search_num, pNode *pReturn, pNode *pParent)
{
	
	pNode pTemp = pT->root;
	bool is_search = false;
	bool can_be_searched = false;

	while (!is_search)
	{
		if (search_num > pTemp->data && pTemp->pR != NULL)
		{
			*pParent = pTemp;
			pTemp = pTemp->pR;
		}
		else if (search_num > pTemp->data && pTemp->pR == NULL)
		{
			printf("数据不存在！\n");
			can_be_searched = false;
			break;
		}
		else if (search_num < pTemp->data && pTemp->data != NULL)
		{
			*pParent = pTemp;
			pTemp = pTemp->pL;
		}
		else if (search_num < pTemp->data && pTemp->pL == NULL)
		{
			printf("数据不存在！\n");
			can_be_searched = false;
			break;
		}
		else if (search_num == pTemp->data)
		{
			is_search = true;
			can_be_searched = true;
			*pReturn = pTemp;

			
		}
	}
	return can_be_searched;
}
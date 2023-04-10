#include"head.h"

void BST_init(pBST pT, pNode *pN)
{
	int data = 0;
	printf("请按照先序顺序输入节点的数据，输入'0'则节点为空\n");
	is_false_type_int(&data);
	rewind(stdin);
	if (data == 0)
	{
		*pN = NULL;
	}
	else
	{
		if (is_empty(pT))
		{
			exit(0);
		}
		else
		{
			*pN = (pNode)malloc(sizeof(Node));
			(*pN)->data = data;
			if (pT->root == NULL)
			{
				pT->root = (*pN);
			}

			BST_init(pT, &(*pN)->pL);
			BST_init(pT, &(*pN)->pR);
		}
	}
}

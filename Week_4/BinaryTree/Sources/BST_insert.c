#include"head.h"

void BST_insert(pBST pT)
{
	ElemType data;
	bool is_insert = false;
	pNode pTemp = pT->root;
	printf("������Ҫ��������ݣ�");
	is_false_type_int(&data);
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
		else if (data > pTemp->data && !is_insert)
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
			printf("���ظ����ݣ�����ʧ�ܣ�\n");
			break;
		}
	}
}
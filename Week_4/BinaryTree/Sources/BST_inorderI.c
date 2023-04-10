#include"head.h"

void BST_inorderR(pNode pN)
{
	if (pN != NULL)
	{
		if (pN->pL != NULL)
		{
			BST_inorderR(pN->pL);
		}
		printf("%d ", pN->data);
		if (pN->pR != NULL)
		{
			BST_inorderR(pN->pR);
		}
	}
}
#include"head.h"

void BST_preorderR(pNode pN)
{
	if (pN != NULL)
	{
		printf("%d ", pN->data);
		if (pN->pL != NULL)
		{
			BST_preorderR(pN->pL);
		}
		if (pN->pR != NULL)
		{
			BST_preorderR(pN->pR);
		}
	}
}
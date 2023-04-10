#include"head.h"

void BST_postorderR(pNode pN)
{
	if (pN != NULL)
	{
		if (pN->pL != NULL)
		{
			BST_postorderR(pN->pL);
		}
		if (pN->pR != NULL)
		{
			BST_postorderR(pN->pR);
		}
		printf("%d ", pN->data);
	}
}
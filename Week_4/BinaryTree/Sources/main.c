#include<stdio.h>
#include"head.h"

//void test01()
//{
//	pBST pT = (pBST)malloc(sizeof(BST));
//	pT->root = NULL;
//	pNode* pN = (pNode*)malloc(sizeof(pNode));
//	BST_init(pT, pN);
//	BST_preorderR(pT->root);
//	free(pT);
//	free(pN);
//	pT = NULL;
//	pN = NULL;
//}

int main()
{
	//test01();
	
	int choice;
	pBST pT1 = (pBST)malloc(sizeof(BST));
	pT1->root = NULL;
	pNode* pN1 = (pNode*)malloc(sizeof(pNode));
	pBST pT2 = (pBST)malloc(sizeof(BST));
	pT2->root = NULL;
	pNode pN2 = (pNode*)malloc(sizeof(pNode));
	pNode* pReturn = NULL, * pParent = NULL;
	ElemType search_num;

	while (1)
	{
		menu();
		printf("请输入对应操作前的数字：");
		is_false_type_int(&choice);
		switch (choice)
		{
		case 1:
			BST_init(pT1, pN1);
			break;
		case 2:
			if (pT1->root != NULL)
			{
				printf("先序排序创建的树的先序遍历结果：\n");
				BST_preorderR(pT1->root);

			}
			if (pT2->root != NULL)
			{
				printf("\n顺序排序创建的树的先序遍历结果：\n");
				BST_preorderR(pT2->root);
			}
			
			break;
		case 3:
			if (pT1->root != NULL)
			{
				printf("先序排序创建的树的中序遍历结果：\n");
				BST_inorderR(pT1->root);
							}
			if (pT2->root != NULL)
			{
				printf("\n顺序排序创建的树的中序遍历结果：\n");
				BST_inorderR(pT2->root);
			}
			
			break;
		case 4:
			if (pT1->root != NULL)
			{
				printf("先序排序创建的树的后序遍历结果：\n");
				BST_postorderR(pT1->root);
			}
			if (pT2->root != NULL)
			{
				printf("\n顺序排序创建的树的后序遍历结果：\n");
				BST_postorderR(pT2->root);
			}
			break;
		case 5:
			BST_sort(pT2, &pN2);
			break;
		case 6:
			BST_insert(pT2);
			break;
		case 7:
			printf("请输入要查找的值：");
			is_false_type_int(&search_num);
			if (BST_search(pT2, search_num, pReturn, pParent))
			{
				printf("找到了！\n");
			}
			else
			{
				printf("未能找到！\n");
			}
			break;
		//case 8:
		//	BST_delete(pT2);
		//	break;
		case 0:
			exit(0);
			break;
		default:
			printf("输入有误！请重新输入!\n");
			break;
		}
		system("pause");
		system("cls");
	}
	free(pT1);
	free(pT2);

	free(pN1);
	free(pN2);

	pT1 = NULL;
	pT2 = NULL;

	pN1 = NULL;
	pN2 = NULL;

	return 0;
}
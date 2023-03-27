#include"head.h"

pLQueue init_queue()
{
	//选择数据类型
	int choice_type = 0;
	printf("请输入队列的数据类型：\n");
	printf("***1.整型*******\n");
	printf("***2.浮点型*****\n");
	printf("***3.字符型*****\n");
	printf("***4.字符串型***\n");
	is_false_type_int(&choice_type);

	
	pLQueue pLQ = (pLQueue)malloc(sizeof(LQueue));
	pNode pHead = (pNode)malloc(sizeof(Node));
	pHead->pNext = NULL;
	pLQ->type = choice_type;
	pLQ->pFront = pHead;
	pLQ->pRear = pHead;

	int num = 0;
	printf("请输入要队列要初始化的个数：");
	is_false_type_int(&num);
	pLQ->length = num;
	
	for (int i = 0; i < num; i++)
	{
		pNode pNew = (pNode)malloc(sizeof(Node));
		printf("请输入第%d个节点的数据：", i + 1);

		if (pLQ->type == 1)
		{
			int* init_i = (int*)malloc(sizeof(int));
			is_false_type_int(init_i);
			pNew->data = init_i;
		}
		else if (pLQ->type == 2)
		{
			float* init_f = (float*)malloc(sizeof(float));
			is_false_type_float(init_f);
			pNew->data = init_f;
		}
		else if (pLQ->type == 3)
		{
			rewind(stdin);
			char* init_c = (char*)malloc(sizeof(char));
			scanf_s("%c", init_c);
			pNew->data = init_c;
		}
		else if (pLQ->type == 4)
		{
			rewind(stdin);
			char* init_ch = (char*)malloc(sizeof(char) * 20);
			gets(init_ch);
			/*scanf_s("%s", init_ch);*/
			pNew->data = init_ch;
		}
		pNew->pNext = NULL;
		pLQ->pRear->pNext = pNew;
		pLQ->pRear = pNew;
	}
	return pLQ;
}


//switch (pLQ->type)
//{
//case 1:
//	scanf_s("%d", &init_i);
//	pNew->data = &init_i;
//	break;
//case 2:
//	scanf_s("%f", &init_f);
//	pNew->data = &init_f;
//	break;
//case 3:
//	scanf_s("%c", &init_c);
//	pNew->data = &init_c;
//	break;
//case 4:
//	scanf_s("%s", &init_ch);
//	pNew->data = &init_ch;
//	break;
//}
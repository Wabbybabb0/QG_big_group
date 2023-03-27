#include"head.h"

//获取头元素
void get_head_node(pLQueue pLQ, void *data)
{
	if (!is_empty(pLQ))
	{
		data = pLQ->pFront->pNext->data;
		/*switch (pLQ->type)
		{
		case 1:
			data = (int*)pLQ->pFront->pNext->data;
			break;
		case 2:
			data = (float*)pLQ->pFront->pNext->data;
			break;
		case 3:
			data = (char*)pLQ->pFront->pNext->data;
			break;
		case 4:
			data = (char*)pLQ->pFront->pNext->data;
		}*/
		print(pLQ, data);
	}
}
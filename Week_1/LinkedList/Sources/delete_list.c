#include"list.h"

//ɾ��
bool delete_list(LinkedList pHead, ElemType* val)
{
	int pos;
	int i = 0;

	if (!is_empty(pHead))
	{
		LinkedList pTemp = pHead;
		printf("������Ҫɾ���Ľڵ��λ�ã�");
		is_false_type(&pos);
		while (i < pos - 1 && pTemp->pNext != NULL)
		{
			pTemp = pTemp->pNext;
			i++;
		}
		if (i > pos - 1 || pTemp->pNext == NULL)
		{
			printf("�õ�λ�����ڻ��������\n");
			return false;
		}
		//��ʱpTempָ�� Ҫɾ���ڵ�� ��һ���ڵ�
		LinkedList pDelete = pTemp->pNext;
		LinkedList p = pDelete->pNext;
		*val = pDelete->data;
		free(pDelete);
		pDelete = NULL;
		pTemp->pNext = p;
		return true;
	}
}
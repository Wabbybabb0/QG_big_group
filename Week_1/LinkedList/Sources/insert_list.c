#include"list.h"

//����
bool insert_list(LinkedList pHead)
{
	int pos;//λ��
	ElemType val;//����
	int i = 0;

	printf("����������λ�ã�");
	is_false_type(&pos);
	printf("�������������ݣ�");
	is_false_type(&val);

	if (!is_empty(pHead))
	{
		LinkedList pTemp = pHead;
		while (i < pos - 1 && pTemp != NULL)
		{
			pTemp = pTemp->pNext;
			i++;
		}
		if (i > pos - 1 || pTemp == NULL)
		{
			printf("�õ�λ�����ڻ��������\n");
			return false;
		}
		//��ʱpHeadָ����� ��Ҫ�����λ�õ���һ���ڵ�

		LinkedList pNew = (LinkedList)malloc(sizeof(LNode));
		pNew->pNext = NULL;
		if (!is_empty(pNew))
		{
			pNew->data = val;
			pNew->pNext = pTemp->pNext;
			pTemp->pNext = pNew;

		}
	}
	return true;
}
#include"head.h"

int pop_and_get(pLQueue bucket)
{
	int head_val;
	if (bucket != NULL && bucket->pFront != bucket->pRear)
	{
		if (bucket->pFront->pNext->pNext == NULL)
		{
			head_val = bucket->pFront->pNext->data;
			free(bucket->pFront->pNext);
			bucket->pFront = bucket->pRear;
			return head_val;
		}
		else
		{
			pNode pTemp = bucket->pFront->pNext->pNext;
			head_val = bucket->pFront->pNext->data;
			free(bucket->pFront->pNext);
			bucket->pFront->pNext = pTemp;
			return head_val;
		}
		
	}
}

void radix_count_sort(int* p, int size)
{
	//找出最大值
	int max = 0;
	for (int i = 0; i < size; i++)
	{
		if (max < p[i])
		{
			max = p[i];
		}
	}
	//找出最大值的最高位次
	int max_digits = 0;
	do
	{
		max /= 10;
		max_digits++;
	} while (max != 0);
	
	int digit = 0;
	while (max_digits> 0)
	{
		digit++;
		max_digits--;
		int num = 0;
		pLQueue bucket[10];
		pNode pHead[10];

		//units_digit

		for (int i = 0; i < 10; i++)
		{
			bucket[i] = (pLQueue)malloc(sizeof(LQueue));
			pHead[i] = (pNode)malloc(sizeof(Node));
			pHead[i]->pNext = NULL;
			bucket[i]->pFront = pHead[i];
			bucket[i]->pRear = bucket[i]->pFront;
			bucket[i]->len = 0;
		}

		for (int i = 0; i < size; i++)
		{
			int temp = p[i] % (int)pow(10,digit) / pow(10,digit-1);
			pNode pNew = (pNode)malloc(sizeof(Node));
			pNew->data = p[i];
			pNew->pNext = NULL;
			bucket[temp]->pRear->pNext = pNew;
			bucket[temp]->pRear = pNew;
			bucket[temp]->len++;
		}

		int i = 0;
		int j = 0;
		while (j < 10)
		{
			while (bucket[j]->pFront != bucket[j]->pRear)
			{
				p[i] = pop_and_get(bucket[j]);
				i++;
			}
			j++;
		}
		for (int i = 0; i < 10; i++)
		{
			free(bucket[i]);
			free(pHead[i]);
			pHead[i] = NULL;
			bucket[i] = NULL;
		}
	}
}